// Test program for Prim's MCST algroithm. This version uses
// a linear scan of the distance array to decide on which vertex is next
// closest, similar to the first version of Dijkstra's algorithm
// Use any of the files in this directory with a .gph extension.
// This version is for the Adjancency Matrix representation

#include "book.h"

#include "grmat.h"

void AddEdgetoMST(int v1, int v2) {
  cout << "Add edge " << v1 << " to " << v2 << "\n";
}

int minVertex(Graph* G, int* D) { // Find min cost vertex
  int i, v = -1;
  for (i=0; i<G->n(); i++) // Initialize v to some unvisited vertex;
    if (G->getMark(i) == UNVISITED) { v = i; break; }
  for (i=0; i<G->n(); i++)  // Now find smallest value
    if ((G->getMark(i) == UNVISITED) && (D[i] < D[v])) v = i;
  return v;
}

#include "Grprim1.book"

// Prim's MCST algorithm: linear scan of distance array for next vertex
// Version for Adjancency Matrix representation
int main(int argc, char** argv) {
  Graph* G;
  FILE *fid;

  if (argc != 2) {
    cout << "Usage: grprimm1 <file>\n";
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

  Prim(G, D, 0);
  for(int k=0; k<G->n(); k++)
    cout << D[k] << " ";
  cout << endl;
  return 0;
}
