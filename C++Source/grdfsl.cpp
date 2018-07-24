// Test harness for the depth first search traversal code
// Use any of the files in this directory with a .gph extension.
// This version is for the Adjancency List representation

#include "book.h"

#include "grlist.h"

// Start with some implementations for the abstract functions
void PreVisit(Graph* G, int v) {
  cout << "PreVisit vertex " << v << "\n";
}

void PostVisit(Graph* G, int v) {
  cout << "PostVisit vertex " << v << "\n";
}

#include "Grdfs.book"

// Test the generalized traversal function

// Start with some implementations for the abstract functions
void doTraverse(Graph* G, int v) {
  cout << "doTraverse vertex " << v << "\n";
  DFS(G, v);
}

#include "Grgentrav.book"


// Test Depth First Search:
// Version for Adjancency List representation
int main(int argc, char** argv) {
  Graph* G;
  FILE *fid;

  if (argc != 2) {
    cout << "Usage: grdfsl <file>\n";
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

  graphTraverse(G);
  return 0;
}
