// Quicksort implementation and timing test driver
// Quicksort optimized to inline all function calls and replace recursion
// with a stack

#include "book.h"

// Include comparator functions
#include "compare.h"

// Quicksort core function: No function calls and no recursion
#include "qsort3.book"

template <typename E, typename Comp>
void sort(E* array, int n) {
  qsort<E,Comp>(array, 0, n-1);
}

#include "sortmain.cpp"

int main(int argc, char** argv) {
  return sortmain<minintCompare>(argc, argv);
}
