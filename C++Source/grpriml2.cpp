// Test program for Prim's MCST algroithm. This version uses
// a priority queue to find the next closest vertex,
// similar to the second version of Dijkstra's algorithm
// Use any of the files in this directory with a .gph extension.
// This version is for the Adjancency List representation

#include "book.h"

#include "grlist.h"
#include "heap.h"

int minVertex(Graph*, int*);

void AddEdgetoMST(int v1, int v2) {
  cout << "Add edge " << v1 << " to " << v2 << "\n";
}

#include "DijkElem.book"

// Comparator class for comparing DijkElem's
class DDComp {
public:
  static bool prior(DijkElem x, DijkElem y)
    { return x.distance < y.distance; }
};

#include "Grprim2.book"


// Prim's MCST algorithm: use priority queue
// Version for Adjancency List representation
int main(int argc, char** argv) {
  Graph* G;
  FILE *fid;

  if (argc != 2) {
    cout << "Usage: grpriml2 <file>\n";
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

  Prim(G, D, 0);
  for(int k=0; k<G->n(); k++)
    cout << D[k] << " ";
  cout << endl;
  return 0;
}
