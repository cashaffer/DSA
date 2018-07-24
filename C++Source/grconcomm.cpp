// Program to find connected components in a graph

#include "book.h"

#include "grmat.h"

#include "Grconcom.book"


// Find connected components in a graph
// Version for Adjancency Matrix representation
int main(int argc, char** argv) {
  Graph* G;
  FILE *fid;

  if (argc != 2) {
    cout << "Usage: grconcomm <file>\n";
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

  concom(G);

  for (int i=0; i<G->n(); i++)
    cout << "Vertex " << i << ": " << G->getMark(i) << endl;
  return 0;
}
