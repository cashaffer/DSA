// Heapsort implementation and timing test driver
// This heapsort uses a modified siftdown operation that
// always promotes the larger child regardless of root value.

#include "book.h"

// Include comparator functions
#include "compare.h"

// Implementation of heap with modified siftdown operation
#include "heap2.h"

// Heapsort implementation
#include "Heapsort.book"

template <typename E, typename Comp>
void sort(E* array, int n) {
 heapsort<E,Comp>(array, n);
}

#include "sortmain.cpp"

int main(int argc, char** argv) {
  return sortmain<maxintCompare>(argc, argv);
}
