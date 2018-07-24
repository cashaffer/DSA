// Quicksort implementation and timing test driver
// Basic Quicksort version

#include "book.h"

// Include comparator functions
#include "compare.h"

// Simple findpivot: Pick middle value in array
#include "Findpiv.book"

// Partition the array
#include "Partit.book"

// qsort core function: Basic qsort
#include "Qsort1.book"

template <typename E, typename Comp>
void sort(E* array, int n) {
  qsort<E,Comp>(array, 0, n-1);
}

#include "sortmain.cpp"

int main(int argc, char** argv) {
  return sortmain<minintCompare>(argc, argv);
}
