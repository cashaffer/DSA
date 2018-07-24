// Test program for Dijkstra's single-source shortest paths algorithm
// Version 2: Use a priority queue to keep track of which vertex
// is the next closest.
// Use any of the files in this directory with a .gph extension.
// This version is for the Adjancency List representation

#include "book.h"

#include "grlist.h"
#include "heap.h"

int minVertex(Graph*, int*);

// Simple class to represent objects to be stored in the priority queue
// Store a vertex and its best known distance
#include "DijkElem.book"

// Comparator class for comparing DijkElem's
class DDComp {
public:
  static bool prior(DijkElem x, DijkElem y)
    { return x.distance < y.distance; }
};

#include "Grdijk2.book"


// Test Dijkstra's algorithm with priority queue
// Version for Adjancency List representation
int main(int argc, char** argv) {
  Graph* G;
  FILE *fid;

  if (argc != 2) {
    cout << "Usage: grdijkl2 <file>\n";
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

  int D[G->n()];

  Dijkstra(G, D, 0);
  for(int k=0; k<G->n(); k++)
    cout << D[k] << " ";
  cout << endl;
  return 0;
}
