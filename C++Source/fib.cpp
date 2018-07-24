// A simple program to calculate the Fibonacci sequence.
// Two versions are provided: One that uses recursion (and whose cost is
// therefore exponential), and one that works iteratively (and whose
// cost is linear).

#include "book.h"

int *Values;

// The recursive version (exponential cost)
#include "fibr.book"

// The iterative version (linear cost)
#include "fibi.book"

// The recursive, memoized
#include "fibrt.book"

int main(int argc, char** argv) {
  int n;

  Assert(argc == 2, "Usage: fib <n>");

  n = atoi(argv[1]);

  Settime();
  cout << "Fibi(" << n << ") = " << fibi(n) << endl;
  cout << "Fibi time: " << Gettime() << " seconds.\n";

  Settime();
  cout << "Fibr(" << n << ") = " << fibr(n) << endl;
  cout << "Fibr time: " << Gettime() << " seconds.\n";

  Values = new int[n+1];
  // Values[0] = 0; Values[1] = Values[2] = 1;
  for (int i=3; i<=n; i++) Values[i] = 0;
  Settime();
  cout << "Fibrt(" << n << ") = " << fibrt(n) << endl;
  cout << "Fibrt time: " << Gettime() << " seconds.\n";

  return 0;
}
