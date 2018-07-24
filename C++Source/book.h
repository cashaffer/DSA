// A collection of various macros, constants, and small functions
// used for the software examples.

// First, include all the standard headers that we need
#include <iostream>
#include <cstdlib>
#include <time.h>  // Used by timing functions

// Now all the standard names that we use
using std::cout;
using std::endl;
using std::string;
using std::ostream;

const int defaultSize = 10; // Default size

#include "book.book"


// Swap two integers
inline void swap(int& i, int& j) {
  int temp = i;
  i = j;
  j = temp;
}

// Swap two char*'s
inline void swap(char* i, char* j) {
  char* temp = i;
  i = j;
  j = temp;
}


// Big enough for simple testing
#define INFINITY 9999

// Timing variables and functions
unsigned tstart = 0;  // Time at beginning of timed section

// Initialize the program timer
void Settime() { tstart = (unsigned) clock(); }

// Return the elapsed time since the last call to Settime
double Gettime() {
  unsigned tcurr = (unsigned) clock();
  return (double)(tcurr - tstart)/(double)CLOCKS_PER_SEC;
}

// Your basic int type as an object.
class Int {
private:
  int val;
public:
  Int(int input=0) { val = input; }
  // The following is for those times when we actually
  //   need to get a value, rather than compare objects.
  int key() const { return val; }
  // Overload = to support Int foo = 5 syntax
  Int operator= (int input) { val = input; return val; }
};

// Let us print out Ints easily
ostream& operator<<(ostream& s, const Int& i)
  { return s << i.key(); }
ostream& operator<<(ostream& s, const Int* i)
  { return s << i->key(); }
