// Test program for the dictionary class implemented using an
// unsorted array-based list

#include "book.h"

// Use an array-based list implementation
#include "alist.h"

#include "SALdict.h"

#include "DictTest.h"
	
// Driver for testing unsorted array-based dictionary
int main(int argc, char** argv) {
  SALdict<int, Int*> dict;

  dicttest(dict);

  return 0;
}
