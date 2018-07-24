// Quicksort implementation and timing test driver
// Quicksort optimized to not qsort lists of length <= THRESHOLD,
// Insertion sort is used at the end for a final sort pass

#include "book.h"

// Include comparator functions
#include "compare.h"

extern int THRESHOLD;

// Insertion sort for final cleanup sort pass
#include "Inssort.book"

// Simple findpivot: Pick middle value in array
#include "Findpiv.book"

// Partition the array
#include "Partit.book"

// qsort core function: do not qsort lists of length <= THRESHOLD
#include "qsort2.book"

template <typename E, typename Comp>
void sort(E* array, int n) {
   qsort<E,Comp>(array, 0, n-1);
  inssort<E,Comp>(array, n); // Cleanup sort
}

#include "sortmain.cpp"

int main(int argc, char** argv) {
  return sortmain<minintCompare>(argc, argv);
}
