// Linked list class test program

#include "book.h"

// Include the comparator classes
#include "compare.h"

// Include the link template class
#include "link.h"

// Include the linked list template class
#include "llist.h"

// Generic list test commands
#include "ListTest.h"

// Main routine for linked list driver class
int main(int argc, char** argv) {
  // Declare some sample lists
  LList<Int*> L1;
  LList<Int*> L2(15);
  LList<Int> L3;

  ListTest<Int*, Int, LList<int> >(L1, L2, L3);
  return 0;
}
