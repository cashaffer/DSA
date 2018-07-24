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

  tree.insert(new CityRec("A", 1000, 20, 10));
  tree.print();
  tree.insert(new CityRec("B", 2000, 20, 10));
  tree.print();
  tree.insert(new CityRec("C", 1500, 20, 10));
  tree.print();
  tree.insert(new CityRec("D", 1500, 20, 10));
  tree.print();
  tree.insert(new CityRec("E", 1500, 20, 10));
  tree.print();
  tree.insert(new CityRec("F", 1500, 20, 10));
  tree.print();
  tree.insert(new CityRec("G", 1500, 20, 10));
  tree.print();
  tree.find(1500, it);
  cout << "Found " << it << endl;

  cout << "Clear tree\n";
  tree.clear();
  cout << "Size: " << tree.size() << " should be 0\n";

  tree.insert(new CityRec("A", 1000, 20, 10));
  tree.print();
  tree.insert(new CityRec("B", 1500, 20, 10));
  tree.print();
  tree.insert(new CityRec("C", 1500, 20, 10));
  tree.print();
  tree.insert(new CityRec("D", 1500, 20, 10));
  tree.print();
  tree.insert(new CityRec("E", 1500, 20, 10));
  tree.print();
  tree.insert(new CityRec("F", 1500, 20, 10));
  tree.print();
  tree.insert(new CityRec("G", 1500, 20, 10));
  tree.print();
  tree.find(1500, it);
  cout << "Found " << it << endl;

  cout << "Clear tree\n";
  tree.clear();
  cout << "Size: " << tree.size() << " should be 0\n";

  tree.insert(new CityRec("A", 1500, 20, 10));
  tree.print();
  tree.insert(new CityRec("B", 1500, 20, 10));
  tree.print();
  tree.insert(new CityRec("C", 1500, 20, 10));
  tree.print();
  tree.insert(new CityRec("D", 1500, 20, 10));
  tree.print();
  tree.insert(new CityRec("E", 1500, 20, 10));
  tree.print();
  tree.insert(new CityRec("F", 1500, 20, 10));
  tree.print();
  tree.insert(new CityRec("G", 1500, 20, 10));
  tree.print();
  tree.find(1500, it);
  cout << "Found " << it << endl;

  return 0;
}
