#!/usr/bin/php

<?php

# This script prepares the book code for distribution.
# It copies all of the files to the distribution directory.
# In the process, it prepends the copyright notice, and all
# instances of "include *.book" have that .book file copied
# into the file.

// This function will recursively remove a directory and all containing
// files
function rrmdir($dir) {
  if (is_dir($dir)) {
    $objects = scandir($dir);
    foreach ($objects as $object) {
      if ($object != "." && $object != "..") {
	if (filetype($dir."/".$object) == "dir")
          rrmdir($dir."/".$object); else unlink($dir."/".$object);
      }
    }
    reset($objects);
    rmdir($dir);
  }
} 

$Distrib = '../distrib';

rrmdir($Distrib); // Recursively clear out the distribution directory

// Initialize the distribution directory
if (!mkdir($Distrib)) {
  echo "Failed to create the distribution directory\n";
  exit;
}

// Explicitly copy the distribution makefile
if (!copy("Makefile.distrib", $Distrib."/"."Makefile")) {
  echo "failed to copy file Makefile.distrib\n";
  exit;
}

$localfiles = scandir('.');  // This will get an array of files

foreach ($localfiles as $thisfile) {
  // Process each of the files in this directory.
  // We want to do the following:
  // * Copy all data files (.gph, .huff)
  // * For each .cpp file and .h file
  //   * Prefix the copyright notice
  //   * Expand it to replace .book includes

  // Copy over all .gph and .huff files
  if (preg_match("/\.gph$/", $thisfile) ||
      preg_match("/\.huff$/", $thisfile)) {
    if (!copy($thisfile, $Distrib."/".$thisfile)) {
      echo "failed to copy file $thisfile\n";
      exit;
    }
  }
  // Now we come to the main event.
  // Expand $thisfile to remove .book includes
  if (preg_match("/\.cpp$/", $thisfile) ||
      preg_match("/\.h$/", $thisfile)) {
    $OutFile = $Distrib."/".$thisfile;
    if (file_exists($OutFile)) {
      echo("Error with re-processing $OutFile\n");
      exit;
    }
    // Output 'Copyright.txt' to $OutFile
    if (!copy("Copyright.txt", $OutFile)) {
      echo "failed to copy the copyright notice for $OutFile\n";
      exit;
    }
    if (!is_writable($OutFile)) {
      echo "Unable to continue writing to $OutFIle\n";      
      exit;
    }
    if (!($OutHandle = fopen($OutFile, 'a'))) { // open for appending
      echo "Cannot open file ($OutFile)";
      exit;
    }
    if (!($InHandle = fopen($thisfile, 'r'))) { // open for reading
      echo "Cannot open file $thisfile";
      exit;
    }

    while (!feof($InHandle)) {
      // Process the next line
      $Line = fgets($InHandle);
      if (preg_match('/#include.*?\.book/', $Line)) {
	// Replace this include line with the .book file contents
	$AnArray = explode('"', $Line);
	$BookFile = $AnArray[1];
	if (fwrite($OutHandle, file_get_contents($BookFile)) === false) {
	  echo "Unable to incorporate book file $BookFile\n";
	  exit;
	}
      }
      else // Its just a normal line that should flow through
	if (fwrite($OutHandle, $Line) === false) {
	  echo "Unable to write out the current line\n";
	  exit;
        }
    }
    fclose($InHandle);
    fclose($OutHandle);
  }
}
?>
