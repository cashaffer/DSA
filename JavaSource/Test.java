// WARNING: This program uses the Assertion class. When it is run,
// assertions must be turned on. For example, under Linux, use:
// java -ea Genfile

/** Copy a file's contents to "dum.out". Translate (internally)
    from bytes to ints in the process.
*/
import java.io.*;

public class Test {

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

    for (int i=0; i<NumShorts; i++)
	assert ((shortbuf[i] > 0) && (shortbuf[i] <= 30000)) : "Oops! Bad value: " + shortbuf[i];

    // Now, write it out
    ByteArrayOutputStream bsoutbuf = new ByteArrayOutputStream();
	DataOutputStream dout = new DataOutputStream(bsoutbuf);
    for (int i=0; i<NumShorts; i++)
      dout.writeShort(shortbuf[i]);
    out.write(bsoutbuf.toByteArray());
  }
}

}

