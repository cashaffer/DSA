// Test program for Topological Sort using BFS (queue)
// Use any of the files in this directory with a .gph extension.
// This version is for the Adjancency List representation

#include "book.h"

#include "grlist.h"

#include "aqueue.h"

void printout(int v) {
  cout << v << " ";
}

#include "Grtopb.book"


// Test Topological Sort with BFS (queue)
// Version for Adjancency List representation
int main(int argc, char** argv) {
  Graph* G;
  FILE *fid;

  if (argc != 2) {
    cout << "Usage: grdfsm <file>\n";
    exit(-1);
  }

  if ((fid = fopen(argv[1], "rt")) == NULL) {
    cout << "Unable to open file |" << argv[1] << "|\n";
    exit(-1);
  }

  G = createGraph<Graphl>(fid);
  if (G == NULL) {
    cout << "Unable to create graph\n";
    exit(-1);
  }

  Queue<int>* Q = new AQueue<int>(G->n());

  topsort(G, Q);
  cout << endl;
  return 0;
}
