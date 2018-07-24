// Selection Sort implementation and timing test driver

#include "book.h"

// Include comparator functions
#include "compare.h"

// Selection sort implementation
#include "Selsort.book"

template <typename E, typename Comp>
void sort(E* array, int n) {
  selsort<E,Comp>(array, n);
}

#include "sortmain.cpp"

int main(int argc, char** argv) {
  return sortmain<minintCompare>(argc, argv);
}
