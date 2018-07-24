// Optimized Shell Sort implementation and timing test driver

#include "book.h"
#include "compare.h"

// Optimized Shell sort implementation, uses "division by 3's"
// to determine growth in list sizes
#include "shsort2.book"

template <typename E, typename Comp>
void sort(E* array, int n) {
  shellsort<E,Comp>(array, n);
}

#include "sortmain.cpp"

int main(int argc, char** argv) {
  return sortmain<minintCompare>(argc, argv);
}
