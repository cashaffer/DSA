// Include this file to access Graph representation implemented using an
// Adjacency List

#include <stdio.h>
#include <ctype.h>

// Used by the mark array
#define UNVISITED 0
#define VISITED 1

#include "link.h"
#include "llist.h"

#include "graph.h"


#include "Edge.book"

// Overload for the Edge << operator
ostream& operator << (ostream& s, Edge e)
{ return s << "(" << e.vertex() << ", " << e.weight() << ")"; }

#include "Graphl1.book"
#include "Graphl2.book"

#include "graphutil.cpp"
