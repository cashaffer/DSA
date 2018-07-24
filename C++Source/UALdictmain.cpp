// Test program for the dictionary class implemented using an
// unsorted array-based list

#include "book.h"

void doSomething(Int* elem) {}

// Use an array-based list implementation
#include "alist.h"

#include "UALdict.h"

#include "DictTest.h"
	
// Driver for testing unsorted array-based dictionary
int main(int argc, char** argv) {
  UALdict<int, Int*> dict;

  dicttest(dict);

  Int* it;

#include "ch4p4.book"

  return 0;
}
