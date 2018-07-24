// Test program for Dijkstra's single-source shortest paths algorithm
// Version 1: Use a simple scan of the distance matrix to find the next
// closest node.
// Use any of the files in this directory with a .gph extension.
// This version is for the Adjancency Matrix representation

#include "book.h"

#include "grmat.h"

int minVertex(Graph*, int*);

#include "Grdijk1.book"

#include "MinVert.book"

// Test Dijkstra's algorithm:
// Version for Adjancency Matrix representation
int main(int argc, char** argv) {
  Graph* G;
  FILE *fid;

  if (argc != 2) {
    cout << "Usage: grdijk1m <file>\n";
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

  int D[G->n()];

  Dijkstra(G, D, 0);
  for(int k=0; k<G->n(); k++)
    cout << D[k] << " ";
  cout << endl;
  return 0;
}
