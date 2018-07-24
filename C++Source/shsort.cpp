// Shell Sort implementation and timing test driver

#include "book.h"

// Include comparator functions
#include "compare.h"

// Shell sort implementation
#include "Shsort.book"

template <typename E, typename Comp>
void sort(E* array, int n) {
  shellsort<E,Comp>(array, n);
}

#include "sortmain.cpp"

int main(int argc, char** argv) {
  return sortmain<minintCompare>(argc, argv);
}
