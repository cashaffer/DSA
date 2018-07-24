// From the software distribution accompanying the textbook
// "A Practical Introduction to Data Structures and Algorithm Analysis,
// Third Edition" by Clifford A. Shaffer, Prentice Hall, 2007.
// Source code Copyright (C) 2006 by Clifford A. Shaffer.

// Partial implementation for 2-3 Trees
// Test building the tree of Figure 10.9

#include <iostream>
using namespace std;

#include "book.h"

// Include comparator functions
#include "compare.h"

#include "tt.ht"

// Warning: This has horrible memory leaks.
// Everytime it does a remove to "it",
// the next time "it" gets used, that previous
// Int object gets clobbered.
int main()
{
  TTTree<int, Int*, intintCompare, getIntsKey > tree;
  Int* it;


  cout << "Insert 10" << endl;
  tree.insert(new Int(10));
  cout << "Insert 24" << endl;
  tree.insert(new Int(24));
  tree.print();
  cout << "Insert 23" << endl;
  tree.insert(new Int(23));
  tree.print();
  cout << "Insert 45" << endl;
  tree.insert(new Int(45));
  tree.print();
  cout << "Insert 21" << endl;
  tree.insert(new Int(21));
  tree.print();
  cout << "Insert 18" << endl;
  tree.insert(new Int(18));
  tree.print();
  cout << "Insert 12" << endl;
  tree.insert(new Int(12));
  tree.print();
  tree.insert(new Int(20));
  tree.insert(new Int(15));
  tree.insert(new Int(33));
  tree.insert(new Int(31));
  tree.insert(new Int(50));
  tree.insert(new Int(48));
  tree.insert(new Int(52));
  tree.insert(new Int(47));
  cout << "Insert 30" << endl;
  tree.insert(new Int(30));
  tree.print();
  return 0;
}
