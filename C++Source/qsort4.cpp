// Quicksort implementation and timing test driver
// Optimize Quicksort: No function calls, no recursion, and no
// sorting of sublists with length <= THRESHOLD

#include "book.h"

// Include comparator functions
#include "compare.h"

extern int THRESHOLD;

// Insertion sort for final cleanup sort pass
#include "Inssort.book"

// qsort core function: do not qsort lists of length <= THRESHOLD,
// no function calls and no recursion
#include "qsort4.book"

template <typename E, typename Comp>
void sort(E* array, int n) {
  qsort<E,Comp>(array, 0, n-1);
  inssort<E,Comp>(array, n);      // Final Insertion Sort
}

#include "sortmain.cpp"

int main(int argc, char** argv) {
  return sortmain<minintCompare>(argc, argv);
}
