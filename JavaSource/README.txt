The "SRC" directory contains the raw source files for all the Java
code. However, they can't be compiled as is, since Java doesn't
support the concept of "include" files (or at least, I didn't use
them).

In general, files with ".x" extensions contain bits of code that
appear in the book. Files with ".txt" extentions are combined with
".x" files to form proper ".java" files for compilation. Files with
".dat" or ".gph" extentions are data files used to test certain
programs.

The makefile will do all of the appropriate copying necessary to
generate the files, as well as the compilations. All compiled
executables will be in the appropriate subdirectory in ../DSJAVA.

