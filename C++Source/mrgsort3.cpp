// Mergesort implementation and timing test driver
// Mergesort implementation optimized to reverse the 2nd half,
// so that there is no need to test for exhausted sublists.
// Also, sublists of length <= THRESHOLD are sorted with insertion sort.

#include "book.h"

// Include comparator functions
#include "compare.h"

// Standard insertion sort implementation
#include "Inssort.book"

extern int THRESHOLD;

//Optimized mergesort implementation
#include "Mrgsort3.book"

template <typename E, typename Comp>
void sort(E* array, int n) {
  static E* temp = NULL;
  if (temp == NULL) temp = new E[n];  // Declare temp array
  mergesort<E,Comp>(array, temp, 0, n-1);
}

#include "sortmain.cpp"

int main(int argc, char** argv) {
  return sortmain<minintCompare>(argc, argv);
}
