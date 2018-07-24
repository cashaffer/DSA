// Test program for Floyd's all-pairs shortest paths algorithm.
// Use any of the files in this directory with a .gph extension.
// This version is for the Adjancency Matrix representation

#include "book.h"

#include "grmat.h"

int **D;

#include "GrFloyd.book"

// Test Floyd's all-pairs shortest paths algorithm
// Version for Adjancency Matrix representation
int main(int argc, char** argv) {
  Graph* G;
  FILE *fid;
  int i,j;

  if (argc != 2) {
    cout << "Usage: grfloydm <file>\n";
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

  D  = new int*[G->n()];
  for (i=0; i<G->n(); i++)
    D[i] = new int[G->n()];
  for (i=0; i<G->n(); i++)
    for (j=0; j<G->n(); j++)
      D[i][j] = INFINITY;
  for (i=0; i<G->n(); i++)
    D[i][i] = 0;

  Floyd(G);

  for (i=0; i<G->n(); i++) {
    for (j=0; j<G->n(); j++)
      if (D[i][j] == INFINITY)
        cout << "-1 ";
      else
	cout << D[i][j] << " ";
    cout << endl;
  }
  return 0;
}
