// From the software distribution accompanying the textbook
// "A Practical Introduction to Data Structures and Algorithm Analysis,
// Third Edition" by Clifford A. Shaffer, Prentice Hall, 2007.
// Source code Copyright (C) 2006 by Clifford A. Shaffer.

// Implementation for 2-3+ Trees

#include <iostream>
using namespace std;

#include "book.h"

// Include comparator functions
#include "compare.h"

#include "CityRec.h"

#include "ttp.ht"

// Warning: This has horrible memory leaks.
// Everytime it does a remove to "it",
// the next time "it" gets used, that previous
// Int object gets clobbered.
int main()
{
  TTTree<int, CityRec*, intintCompare, getCityPop> tree;
  CityRec* it;

  cout << "Size: " << tree.size() << " should be 0\n";
  tree.insert(new CityRec("A", 1000, 20, 10));
  tree.print();
  cout << "Size: " << tree.size() << " should be 1\n";
  tree.remove(1000, it);
  tree.print();
  cout << "Size: " << tree.size() << " should be 0\n";
  cout << "Clear tree\n";
  tree.clear();
  cout << "Size: " << tree.size() << " should be 0\n";
  cout << "Insert B\n";
  tree.insert(new CityRec("B", 200, 5, 3));
  cout << "Size: " << tree.size() << " should be 1\n";
  tree.print();
  cout << "Do find on 20\n";
  if (tree.find(20, it))
    cout << "Found " << it << endl;
  else cout << "No key 20\n";
  cout << "Do find on 200\n";
  if (tree.find(200, it))
    cout << "Found " << it << endl;
  else cout << "No key 200\n";
  tree.print();
  if (tree.removeRec(it))
    cout << "Removed " << it << endl;
  else cout << "No such record as:" << it << endl;
  tree.print();
  return 0;
}
