// Test program for the linked stack class

#include "book.h"

#include "lstack.h"

#include "StackTest.h"

// Driver class for list implementations

// Main routine for array-based list driver class
int main(int argc, char** argv) {
  // Declare some sample lists
  LStack<Int> S1;
  LStack<Int*> S2(15);
  LStack<int> S3;

  StackTest<Int>(S1);
  StackTest<int>(S3);
  return 0;
}
