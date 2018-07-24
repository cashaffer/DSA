// Test driver for the payroll class. Mainly a syntax check.
// The purpose of this class is to demonstrate simple comparators.

#include "book.h"

// Use an array-based list
#include "alist.h"

// Implement a dictionary with an unsorted array-based list
#include "UALdict.h"

// Implementation for Payroll class
#include "Payroll.book"

// Overload << operator to print Payroll records
ostream& operator << (ostream& s, Payroll* p) {
  return s << p->getID() << ", " << p->getname() << ", "
           << p->getaddr() << endl;
}

// Driver main routine to test the payroll entry comparators
#include "PayrollMain.book"
