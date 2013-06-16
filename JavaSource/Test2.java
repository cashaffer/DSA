// WARNING: This program uses the Assertion class. When it is run,
// assertions must be turned on. For example, under Linux, use:
// java -ea Genfile

/** Simple demonstration of how to check whether a file exists
    (and how to delete it if it does). */

import java.io.*;

public class Test2 {

public static void main(String args[]) throws IOException {

  assert args.length == 1 : "Usage: Test2 <name>";

  File it = new File(args[0]);

  if (it.exists()) {
    System.out.println("File named " + args[0] + " exists -- delete it");
    it.delete();
  }
  else
    System.out.println("File named " + args[0] + " does not exist");
}

}
