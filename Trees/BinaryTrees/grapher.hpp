#ifndef GRAPHER_H

#define GRAPHER_H

#include "binaryTrees.hpp"

// Functions for Building Graph
void makeGraph(BstNode *);
void grapherPreorderTraversal(BstNode *, std::fstream &);
void displayGraph();

#endif // !GRAPHER_H