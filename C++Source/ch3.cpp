// This program tests various code fragements from
// Chapter 3, mainly for syntactic correctness.

#include "book.h"

#include "permute.h"

// Dummy function for the example of section 3.8
int value(int x) { return x; }

// Dummy sort function for c3p13.book and c3p16.book
int sort(int *x, int count) { return count; }

// Since the array used in this fragment is two dimensional, bury it
// in its own function to avoid conflicting with the use in other
// fragments.
void foo(int n) {
  int A[n][n];
  int i, j, tmp;

// Exercise 3.10d
#include "c3p10.book"

}

int main() {
  int sum;
  int i, j, k;
  int n = 100;
  int a;
  int b = 15;
  int *A;
  int sum1, sum2;

  Randomize();

  if ((A = (int *)calloc(n, sizeof(int))) == NULL) {
    cout << "Error: Unable to allocate space for permutation array\n";
    exit(-1);
  }

// Example 3.3, a simple double loop
#include "c3p1.book"
  cout << "Test 1: For n = " << n << ", sum is " << sum << "\n";
  cout << "(It should be n^2.)\n";

// Example 3.9, a simple assignment
#include "c3p2.book"
  cout << "Test 2: b is " << b << " and a is " << a << "\n";

// Example 3.10, a single loop making a simple summation
#include "c3p3.book"
  cout << "Test 3: For n = " << n << ", n^2 is " << sum << "\n";

// Example 3.11, two loops, one nested
#include "c3p4.book"
  cout << "Test 4: For n = " << n << ", the sum from 1 to n is "
       << sum << "\n";

// Example 3.12, two loops
#include "c3p5.book"
  cout << "Test 5: This should be n^2: " << sum1 << " (n = " << n << ")\n";
  cout << "Again, the sum from 1 to n is " << sum2 << "\n";

// Example 3.12, two loops with doublings of the index variable
#include "c3p6.book"
  cout << "Test 6: For n = " << n << ", the sum of n taken log n times is: "
       << sum1 << "\n";
  cout << "For n = " << n << ", the sum of 2^j is: " << sum2 << "\n";

  int c = 1;
  int d = 2;
  int e = 3;

// Exercise 3.10a
#include "c3p7.book"
  cout << "Done part 7\n";
  a = d ;

// Exercise 3.10b
#include "c3p8.book"
  cout << "Done part 8\n";

// Exercise 3.10c
#include "c3p9.book"
  cout << "Done part 9\n";

  // Call code for Exercise 3.10d
  foo(10);

  cout << "Done part 10\n";
  cout << "Finally, do part 11.\n";

  for (i=0; i<n; i++)
    A[i] = i;

  permute(A, n);

// Exercise 3.10e
#include "c3p11.book"
  cout << "Sum should be about n log n: " << sum << "\n";

// Exercise 3.10f
#include "c3p12.book"
  cout << "Sum should be about n log n: " << sum << "\n";

// Exercise 3.10g
#include "c3p13.book"
  cout << "Done 13\n";

  for (i=0; i<n; i++)
    A[i] = i;
  permute(A, n);
// Exercise 3.10h
#include "c3p14.book"
    cout << "Part 14, sum should be about one half n^2: " << sum << "\n";

// Exercise 3.10i
#include "c3p15.book"
  cout << "Final sum should just be 100: " << sum << "\n";

// Example from Section 3.8 on multiple parameters
  int *count = NULL;
  int C=10, P=100;
#include "c3p16.book"

  return 0;
}
