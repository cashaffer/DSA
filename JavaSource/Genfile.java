/** Generate a data file with integer (32-bit) data values in the range 0 to 29,999.
*/

import java.io.*;

public class Genfile {

static final int NumRec = 1024;

public static void main(String args[]) throws IOException {

  if ((args.length != 2) && (args.length != 3)) {
    System.out.println("Usage: Genfile <name> <size> [+/-]\nSize is measured in blocks of 4096 bytes");
    return;
  }
  int NumBlocks = Integer.parseInt(args[1]);
  DataOutputStream file = new DataOutputStream(
      new BufferedOutputStream(new FileOutputStream(args[0])));

  int recs = 1024 * NumBlocks - 1;

  if (args.length == 2) // Write out random numbers
    for (int i=0; i<NumBlocks; i++)
      for (int j=0; j<NumRec; j++) {
        int val = DSutil.random(30000);
        file.writeInt(val);
     }
  else if (args[2].charAt(0) == '+') // Write out numbers ascending
    for (int i=0; i<NumBlocks; i++)
      for (int j=0; j<NumRec; j++)
        file.writeInt(i*NumRec + j);
  else if (args[2].charAt(0) == '-') // Write out numbers descending
    for (int i=0; i<NumBlocks; i++)
      for (int j=0; j<NumRec; j++)
        file.writeInt(recs - (i*NumRec + j));
  else {
      System.out.println("Bad parameters");
      return;
  }
  file.flush();
  file.close();
}

}
