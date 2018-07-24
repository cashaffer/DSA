// Heapsort implementation and timing test driver
// Basic Heapsort version

#include "book.h"

// Include comparator functions
#include "compare.h"

// Include the heap implementation
#include "heap.h"

// Standard heapsort implementation
#include "Heapsort.book"

template <typename E, typename Comp>
void sort(E* array, int n) {
heapsort<E,Comp>(array, n);
}

#include "sortmain.cpp"

int main(int argc, char** argv) {
  return sortmain<maxintCompare>(argc, argv);
}
