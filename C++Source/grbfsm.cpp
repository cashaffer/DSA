// Test harness for the breadth first search traversal code
// Use any of the files in this directory with a .gph extension.
// This version is for the Adjancency Matrix representation

#include "book.h"

#include "grmat.h"

#include "aqueue.h"

// Queue used by breadth-first traversal
Queue<int>* Q;

// Start with some implementations for the abstract functions
void PreVisit(Graph* G, int v) {
  cout << "PreVisit vertex " << v << "\n";
}

void PostVisit(Graph* G, int v) {
  cout << "PostVisit vertex " << v << "\n";
}

#include "Grbfs.book"

// Test the generalized traversal function

// Start with some implementations for the abstract functions
void doTraverse(Graph* G, int v) {
  cout << "doTraverse vertex " << v << "\n";
  BFS(G, v, Q);
}

#include "Grgentrav.book"


// Test Breadth First Search:
// Version for Adjancency Matrix representation
int main(int argc, char** argv) {
  Graph* G;
  FILE *fid;

  if (argc != 2) {
    cout << "Usage: grbfsm <file>\n";
    exit(-1);
  }

  if ((fid = fopen(argv[1], "rt")) == NULL) {
    cout << "Unable to open file |" << argv[1] << "|\n";
    exit(-1);
  }

  G = createGraph<Graphm>(fid);
  if (G == NULL) {
    cout << "Unable to create graph\n";
    exit(-1);
  }

  Q = new AQueue<int>(G->n());

  graphTraverse(G);
  return 0;
}
