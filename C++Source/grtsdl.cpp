// Test program for Topological Sort using DFS
// Use any of the files in this directory with a .gph extension.
// This version is for the Adjancency List representation

#include "book.h"

#include "grlist.h"

void printout(int v) {
  cout << v << " ";
}

void tophelp(Graph*, int);

#include "Grtopd.book"


// Test Topological sort using DFS
// Version for Adjancency List representation
int main(int argc, char** argv) {
  Graph* G;
  FILE *fid;

  if (argc != 2) {
    cout << "Usage: grtsdl <file>\n";
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

  topsort(G);
  cout << endl;
  return 0;
}
