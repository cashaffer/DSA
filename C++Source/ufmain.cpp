// Implementation and test driver for UNION/FIND implemented with a
// parent-pointer tree. This version uses path compression.

#include "book.h"
#define ROOT -1

// Parent-pointer tree implementation (with path compression)
#include "uf.h"

// Driver to test the implementation, mainly its syntax
int main(int argc, char** argv) {
  ParPtrTree* gt = new ParPtrTree(10);
  gt->UNION(1, 2);
  cout << gt->differ(0, 1) << endl;
  cout << gt->differ(2, 1) << endl;
  return 0;
}
