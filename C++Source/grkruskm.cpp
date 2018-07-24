// Test program for Kruskal's MCST algroithm.
// Use any of the files in this directory with a .gph extension.
// This version is for the Adjancency Matrix representation

#include "book.h"

#define ROOT -1

// Include support for UNION/FIND
#include "uf.h"

#include "grmat.h"

// Use a Priority Queue to get next cheapest edge
#include "heap.h"

int minVertex(Graph*, int*);

void AddEdgetoMST(int v1, int v2) {
  cout << "Add edge " << v1 << " to " << v2 << "\n";
}

// Simple class to store data in the heap: edge and its distance
#include "KruskalElem.book"

// Comparator to compare two KruskElem's
class Comp {
public:
  static bool prior(KruskElem x, KruskElem y)
    { return x.distance < y.distance; }
};

#include "Grkruskal.book"


// Test Kruskal's MCST algorithm
// Version for Adjancency Matrix representation
int main(int argc, char** argv) {
  Graph* G;
  FILE *fid;

  if (argc != 2) {
    cout << "Usage: gkruskm <file>\n";
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

  Kruskel(G);
  return 0;
}
