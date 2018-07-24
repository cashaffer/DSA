// A program to generate the moves needed to solve the Towers of Hanoi
// problem.
// There are two versions. One is a simple recursive implementation.
// The other replaces the recursion with a stack.

#include "book.h"

typedef int Pole; // A simple definition for a pole type

// What to do when we "move" a disk: Print it out
#define move(X, Y) cout << "Move " << (X) << " to " << (Y) << endl

// A simple recursive function that generates the solution steps
#include "TOH.book"

// Now we show how to do this by replacing recursion with a stack.

// Include the standard stack template implementation
#include "astack.h"

// Now, we need to define the objects to be put on the stack
// TOHobj describes an operation to perform. 
// It has 5 members: Operation type, number of disks to operate on,
// and the designations (start, goal, temp) for the three poles.
// There are two operation types.
// (i) DOTOH describes what originally was a recursive call.
// It defines the pole order and the number of disks to be moved.
// (ii) DOMOVE describes a move operation.
// It defines the start and goal pole for the disk to be moved.
#include "TOHobj.book"

// This is the stack version of the function that solves the TOH problem
#include "TOHstack.book"

int main(int argc, char** argv) {

  Assert(argc == 2, "Usage: toh <num_of_disks>");

  int n = atoi(argv[1]);
  cout << "Doing recursive version on " << n << " disks\n";
  TOH(n, 1, 3, 2);

  cout << endl;

  AStack<TOHobj*> S(2*n+1); // Make a stack with just enough room
  cout << "Now, do non-recursive version\n";
  TOH(n, 1, 3, 2, S);

  return 0;
}
