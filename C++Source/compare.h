// Some definitions for Comparator classes
#include <string.h>

// Get the key from an int
class getintKey {
public:
  static int key(int x) { return x; }
};

// Get the key from an Int object
class getIntKey {
public:
  static int key(Int x) { return x.key(); }
};

// Get the key from a pointer to an Int object
class getIntsKey {
public:
  static int key(Int* x) { return x->key(); }
};

// Not used by the dictionary, but used by largest.
class IntIntCompare {
public:
  static bool lt(Int x, Int y) { return x.key() < y.key(); }
  static bool eq(Int x, Int y) { return x.key() == y.key(); }
  static bool gt(Int x, Int y) { return x.key() > y.key(); }
};

// Not used by the dictionary, but used by largest.
class IntsIntsCompare {
public:
  static bool lt(Int* x, Int* y) { return x->key() < y->key(); }
  static bool eq(Int* x, Int* y) { return x->key() == y->key(); }
  static bool gt(Int* x, Int* y) { return x->key() > y->key(); }
};

// For use with max-heap
class maxIntCompare {
public:
  static bool prior(Int x, Int y) { return x.key() > y.key(); }
};

// For use with max-heap
class maxIntsCompare {
public:
  static bool prior(Int* x, Int* y) { return x->key() > y->key(); }
};

// For use with min-heap and sorting
class minIntCompare {
public:
  static bool prior(Int x, Int y) { return x.key() < y.key(); }
};

// For use with min-heap and sorting
class minIntsCompare {
public:
  static bool prior(Int* x, Int* y) { return x->key() < y->key(); }
};

// For use with min-heap and sorting
class minintCompare {
public:
  static bool prior(int x, int y) { return x < y; }
};

// For use with max-heap and heapsorting
class maxintCompare {
public:
  static bool prior(int x, int y) { return x > y; }
};

// Compare two ints
#include "intcomp.book"

#include "cccomp1.book"

#include "cccomp2.book"
