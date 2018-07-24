// A program to compare the time required to do a simple binsort
// using two arrays versus a binsort that swaps "in place". Thus,
// the first version uses twice the space (since it requires an
// auxilliary array), while the second version does extra copying
// (because a swap is more expensive than a direct copy).

#include "book.h"

#include "permute.h"

#define COUNT 100

typedef int E;

#include "list.h"

int MaxKeyValue = 100; // dummy declaration for binsort.book syntax check

// Check syntax for binsort code
#include "binsort.book"

int main(int argc, char** argv) {
  E* A; // The array pointer
  E* B; // Second array
  int n;
  int i, j;

  Assert(argc == 2, "Usage: binsimp <size_of_array>");

  n = atoi(argv[1]);
  A = new E[n];
  B = new E[n];

  Randomize();

  for (i=0; i<n; i++)
    A[i] = i;
  permute(A, n);

  Settime();
  for (j=0; j<COUNT; j++) {

#include "binsimp1.book"

  }
  cout << "Time for `fast' binsort (" << COUNT << " runs): "
       << Gettime() << " seconds\n";

  // For "slow" binsort, we first get a benchmark on the time to
  // do permutations.

  Settime();
  for (j=0; j<COUNT; j++) {
    for (i=0; i<n; i++)
      A[i] = i;
    permute(A, n);
  }
  double permtime = Gettime();
  cout << "Time to do " << COUNT << " permutations: "
       << permtime << " seconds\n";

  // Now, we do the binsort.

  Settime();
  for (j=0; j<COUNT; j++) {
    for (i=0; i<n; i++)
      A[i] = i;
    permute(A, n);

#include "binsimp2.book"

  }
  double slowtime = Gettime();
  cout << "Time for `slow' binsort (" << COUNT << " runs): "
       << slowtime << " seconds\n";
  cout << "Net cost is: " << slowtime - permtime << " seconds\n";

  cout << "Let's check to be sure this works.\n";
  for(i=0; i<10; i++)
    cout << A[i] << "  ";
  cout << endl;
  for(i=0; i<10; i++)
    cout << B[i] << "  ";
  cout << endl;

 return 0;
}
