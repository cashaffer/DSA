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

  cout << "Insert 10" << endl;
  tree.insert(new CityRec("A", 10, 110, 210));
  cout << "Insert 24" << endl;
  tree.insert(new CityRec("B", 24, 124, 224));
  tree.print();
  cout << "Insert 23" << endl;
  tree.insert(new CityRec("C", 23, 123, 223));
  tree.print();
  cout << "Insert 45" << endl;
  tree.insert(new CityRec("D", 45, 145, 245));
  tree.print();
  cout << "Insert 21" << endl;
  tree.insert(new CityRec("E", 21, 121, 221));
  tree.print();
  cout << "Insert 18" << endl;
  tree.insert(new CityRec("F", 18, 118, 218));
  tree.print();
  cout << "Insert 12" << endl;
  tree.insert(new CityRec("G", 12, 112, 212));
  tree.print();
  cout << "Insert 20" << endl;
  tree.insert(new CityRec("H", 20, 120, 220));
  tree.print();
  cout << "Insert 15" << endl;
  tree.insert(new CityRec("I", 15, 115, 215));
  tree.print();
  cout << "Insert 33" << endl;
  tree.insert(new CityRec("J", 33, 133, 233));
  tree.print();
  cout << "Insert 31" << endl;
  tree.insert(new CityRec("K", 31, 131, 231));
  tree.print();
  cout << "Insert 50" << endl;
  tree.insert(new CityRec("L", 50, 150, 250));
  tree.print();
  cout << "Insert 48" << endl;
  tree.insert(new CityRec("M", 48, 148, 248));
  cout << "Insert 52" << endl;
  tree.insert(new CityRec("N", 52, 152, 252));
  tree.print();

  cout << "Insert 53" << endl;
  tree.insert(new CityRec("N", 53, 153, 253));
  tree.print();

  cout << endl << "Delete 50\n";
  tree.find(50, it);
  tree.removeRec(it);
  tree.print();

  cout << endl << "Delete 48\n";
  tree.find(48, it);
  tree.removeRec(it);
  tree.print();

  cout << endl << "Delete 18\n";
  tree.find(18, it);
  tree.removeRec(it);
  tree.print();

  cout << endl << "Delete 20\n";
  tree.find(20, it);
  tree.removeRec(it);
  tree.print();

  cout << endl << "Delete 21\n";
  tree.find(21, it);
  tree.removeRec(it);
  tree.print();

  cout << endl << "Delete 10\n";
  tree.find(10, it);
  tree.removeRec(it);
  tree.print();

  return 0;
}
