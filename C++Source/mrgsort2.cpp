// Mergesort implementation and timing test driver
// Mergesort implementation optimized to reverse the 2nd half,
// so that there is no need to test for exhausted sublists

#include "book.h"

// Include comparator functions
#include "compare.h"

// Mergesort implementation optimized to reverse the 2nd half
#include "Mrgsort2.book"

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
