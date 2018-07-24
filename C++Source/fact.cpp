// A simple program to compute factorials. There are two versions.
// One is a standard recursive form. The other imitates recursion
// using a stack.

#include "book.h"

#include "rfact.book"

// This version uses a stack to replace the recursive calls
#include "astack.h"
#include "sfact.book"

int main(int argc, char** argv)
{
  int n;

  Assert(argc == 2, "Usage: fact <n>");

  n = atoi(argv[1]);

  cout << "First, do the recursive version.\n";
  long val = fact(n);
  cout << "The factorial of " << n << " is " << val << endl;

  cout << "\nNow, do the stack-based version.\n";
  long val2 = 1;
  if (n>0) {
    AStack<int> fs(n-1);  // Make stack just big enough
    val2 = fact(n, fs);
  }
  cout << "The factorial of " << n << " is " << val2 << endl;

  return 0;
}
