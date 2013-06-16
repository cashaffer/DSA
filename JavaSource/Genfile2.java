/** Generate a test data file. The size is a multiple of 4096 bytes.
    Depending on the options, you can generate two types of output.
    With option "-a", the output will be set so that when interpreted
    as ASCII characters, it will look like a series of:
    [space][letter][space][space].
    With option "-b", the records are short ints, with each record
    having a value less than 30,000.
*/

import java.io.*;
import java.util.*;
import java.math.*;

public class Genfile2 {

static final int BlockSize = 4096;
static final int NumRecs = 2048; // Because they are short ints

/** Initialize the random variable */
static private Random value = new Random(); // Hold the Random class object

static int random(int n) {
    return Math.abs(value.nextInt()) % n;
}

public static void main(String args[]) throws IOException {
  short val;

  if ((args.length != 3) || (args[0].charAt(0) != '-')) {
	System.out.println("Usage: Genfile2 <option> <filename> <size>" +
			   "\nOptions ust be '-a' for ASCII, or '-b' for binary." +
			   "\nSize is measured in blocks of 4096 bytes");
	return;
  }
  int NumBlocks = Integer.parseInt(args[2]); // Size of file in blocks
  DataOutputStream file = new DataOutputStream(
	 new BufferedOutputStream(new FileOutputStream(args[1])));

  if (args[0].charAt(1) == 'b') // Write out random numbers
      for (int i=0; i<NumBlocks; i++)
	  for (int j=0; j<NumRecs; j++) {
	      val = (short)(random(29999) + 1);
	      file.writeShort(val);
	  }
  else if (args[0].charAt(1) == 'a') // Write out ASCII-readable values
      for (int i=0; i<NumBlocks; i++)
	  for (int j=0; j<NumRecs; j++) {
	      if ((j%2) == 1)
		  val = (short)(8224);
	      else
		  val = (short)(random(26) + 0x2041);
	      file.writeShort(val);
          }
  else {
      System.out.println("Bad parameters");
      return;
  }
  file.flush();
  file.close();
}

}
