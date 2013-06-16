// WARNING: This program uses the Assertion class. When it is run,
// assertions must be turned on. For example, under Linux, use:
// java -ea Genfile

/** Check if a file is sorted.
*/
import java.io.*;

public class Test3 {

static final int BlockSize = 4096;
static final int NumInts = 1024; // Because they are 4 bytes
static final int NumShorts = 2048; // Because they are 2 bytes

public static void main(String args[]) throws IOException {

  byte[] buf = new byte[BlockSize];
  short[] shortbuf = new short[NumShorts];

  assert args.length == 2 :
    "Usage: Test <name> <size>\nSize is measured in blocks of 4096 bytes";
  int filesize = Integer.parseInt(args[1]);
  RandomAccessFile in = new RandomAccessFile(args[0], "r");
  RandomAccessFile out = new RandomAccessFile("dum.out", "rw");

  for (int blocks=0; blocks<filesize; blocks++) {
    // Suck it in
    ByteArrayInputStream bsbuf = new ByteArrayInputStream(buf);
    in.read(buf, 0, BlockSize);
    DataInputStream din = new DataInputStream(bsbuf);
    for (int i=0; i<NumShorts; i++)
      shortbuf[i] = din.readShort();

    for (int i=2; i<NumShorts; i+=2)
	assert (shortbuf[i] >= shortbuf[i-2]) : "Values out of order in block " + blocks + ": " + shortbuf[i-2] + " at position " + ((i-2)/2) + " and " + shortbuf[i] + " at position " + (i/2);

  }
}

}

