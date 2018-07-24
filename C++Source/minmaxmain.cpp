// Determine the minimum and the maximum from an unsorted array.

#include "book.h"

using std::min;
using std::max;

#include "minmax.book"

#include "permute.h"

int main(int argc, char** argv)
{
  int n;
  int Min, Max;

  Assert(argc == 2, "Usage: minmax <n>");

  n = atoi(argv[1]);

  int* A = new int[n];

  for (int i=0; i<n; i++)
    A[i] = i+1;
  permute(A, n);

  MinMax(A, 0, n-1, Min, Max);
  cout << "Min is: " << Min << ", Max is: " << Max << endl;

  return 0;
}
