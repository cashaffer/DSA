// Test program for the linked queue class

#include "book.h"

#include "lqueue.h"

#include "QueueTest.h"

// Driver class for queue implementations

// Main routine for array-based queue driver class
int main(int argc, char** argv) {
  // Declare some sample lists
  LQueue<Int> S1;
  LQueue<Int*> S2(15);
  LQueue<int> S3;

  QueueTest<Int>(S1);
  QueueTest<int>(S3);
  return 0;
}
