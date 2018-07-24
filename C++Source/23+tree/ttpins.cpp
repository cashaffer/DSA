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

#include "ttpins.ht"

// Warning: This has horrible memory leaks.
// Everytime it does a remove to "it",
// the next time "it" gets used, that previous
// Int object gets clobbered.
int main()
{
  TTTree<int, CityRec*, intintCompare, getCityPop> tree;
  CityRec* it;

  tree.insert(new CityRec("A", 15, 115, 215));
  tree.insert(new CityRec("B", 15, 1015,2015));
  tree.insert(new CityRec("C", 15, 110, 210));
  tree.print();

  tree.insert(new CityRec("D", 8, 120, 220));
  tree.print();

  tree.insert(new CityRec("E", 20, 125, 225));
  tree.print();

  tree.insert(new CityRec("F", 25, 108, 208));
  tree.print();
  return 0;
}
