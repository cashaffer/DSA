// Test driver for syntax checking the various hashing routines

#include "book.h"

// Include comparator functions
#include "compare.h"

#define HASHSIZE 101

int HT[HASHSIZE];
int M = HASHSIZE;

// Hash function for character strings.
#include "Sfold.book"

// Hash function for character strings:
// Simply sum up the ascii values per character
#include "Hchar.book"

// Hash function for ints: take mod 16
#include "Hint.book"

template <typename Key>
int p(Key K, int i) { return i; }

int main(int argc, char** argv) {
  if (argc == 2)
    cout << "Hashed |" << argv[1] << "| to " << sfold(argv[1]) << endl;

  cout << "Sfold on aaaabbbb returns " << sfold("aaaabbbb") << endl;
  return 0;
}
