// Timing test for loops: incrementing vs. decrementing (test against 0)

import java.io.*;

public class UpDown {

static int runs = 1000000;

public static void main(String args[]) throws IOException {

  assert args.length >= 1 : "Usage: UpDown <count>";

  long i, j;

  long count = Integer.parseInt(args[0]);
  System.out.println("Doing " + count + " times");

  long time1 = System.currentTimeMillis();
  long sum1 = 0;
  for (i=0; i<runs; i++)
    for (j=0; j<count; j++)
      { sum1++; }
  long time2 = System.currentTimeMillis();
  long sum2 = 0;
  for (i=runs; i != 0; i--)
    for (j=count; j != 0; j--)
      { sum2++; }
  long time3 = System.currentTimeMillis();

  System.out.println("Up time is " + (time2-time1) +
                     ", down time is " + (time3-time2));
  System.out.println("Sum1 is " + sum1 + ", sum2 is " + sum2);

}

}
