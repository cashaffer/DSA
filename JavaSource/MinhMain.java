import java.io.*;

public class MinhMain {

public static void main(String args[]) throws IOException {
  int i, j;
  Assert.notFalse(args.length == 1, "Usage: heap <heapsize>");
  int n = Integer.parseInt(args[0]);
  IElem[] A = new IElem[n];
  IElem[] B = new IElem[n];
  IElem[] C = {new IElem(73), new IElem(6), new IElem(57),
	           new IElem(88), new IElem(60), new IElem(34),
			   new IElem(83), new IElem(72), new IElem(48),
			   new IElem(85)};
  MinHeap BH = new MinHeap(B, 0, 20);
  MinHeap Test = new MinHeap(C, 10, 10);

  Assert.notFalse(n<=20, "Heap size is too big");
  for (i=0; i<n; i++)
    A[i] = new IElem(i);

  DSutil.permute(A);

  System.out.println("Initial values");
  for (i=0; i<n; i++) {
    System.out.print(A[i] + "  ");
    if (i == 9) System.out.println();
  }
  System.out.println();

  for (i=0; i<n; i++)
    BH.insert(A[i]);

  for (i=0; i<BH.heapsize(); i++) {
    System.out.print(B[i] + "  ");
    if (i == 9) System.out.println();
  }
  System.out.println();

  MinHeap AH = new MinHeap(A, n, 20);

  for (i=0; i<AH.heapsize(); i++) {
    System.out.print(A[i] + "  ");
    if (i == 9) System.out.println();
  }
  System.out.println();

  System.out.println("Max value: " + AH.removemin());

  for (i=0; i<AH.heapsize(); i++) {
    System.out.print(A[i] + "  ");
    if (i == 9) System.out.println();
  }
  System.out.println();

  System.out.println("Max value: " + AH.removemin());

  for (i=0; i<AH.heapsize(); i++) {
    System.out.print(A[i] + "  ");
    if (i == 9) System.out.println();
  }
  System.out.println();

  System.out.println("Remove value: " + AH.remove(2));

  for (i=0; i<AH.heapsize(); i++) {
    System.out.print(A[i] + "  ");
    if (i == 9) System.out.println();
  }
  System.out.println();

  for (i=0; i<10; i++)
    System.out.print(C[i] + "  ");
  System.out.println();

  for (j=0; j<10; j++) {
    Test.removemin();
    for (i=0; i<10; i++)
      System.out.print(C[i] + "  ");
    System.out.println();
  }

  System.in.read();
} // main

} // class Minhmain