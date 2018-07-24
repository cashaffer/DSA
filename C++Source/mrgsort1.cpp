// Mergesort implementation and timing test driver
// Basic Mergesort version

#include "book.h"

// Include comparator functions
#include "compare.h"

// Basic mergesort implementation
#include "Mrgsort1.book"

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
