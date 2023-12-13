#ifndef GRAPHER_H

#define GRAPHER_H

#include "AVLTrees.hpp"

// Functions for Building Graph
void makeGraph(AVLNode *);
void grapherPreorderTraversal(AVLNode *, std::fstream&);
void displayGraph();

#endif // !GRAPHER_H