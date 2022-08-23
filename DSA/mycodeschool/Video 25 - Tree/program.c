#include <stdio.h>
#include <stdlib.h>

//~                          Data Structures: Introduction to Trees

//~ We can use Trees to show Organisational Hierarchy of a company.

//?                          Tree: Definitions
//~ Tree Data Structure can be defined as a collection of entities called Nodes linked together to simulate a hierarchy.
//~ The topmost node of a tree is called the root of the Tree.
//~ Each node can contain data or may contain a link or reference to some other nodes which can be called its children.
//~ Nodes are connected with a link.
//~ Nodes connected below are called children.
//~ Nodes are connected above is called parent.
//~ Nodes at the same level are called siblings.
//~ Root is the only node which has no parent.
//! Any Node in the tree which does not have a chiled is called Leaf Node.
//! All Nodes with atleast one child are called internal nodes.
//~ More relationships: grand-parent, grand-child.
//~ If we go by depth, then all the nodes which we traversed to get to the leaf, are called ancestors.
//~ Nodes not having same parent, but having same level are called cousins.

//?                         Tree: Properties
//~ 1) It can be called as a recursive data structure.
//~ The root of the tree contains link to the root of all the sub-trees.
//~ 2) In a tree with n-nodes, there will always be n-1 edges.
//~ Every node except root node always has exactly one incoming edge. => therefore, with n nodes, there are n-1 edges.
//~ 3) Depth: Length of the path from root to node X.
//~ The depth of root node will be 0.
//~ Just count the number of links from root to node X.
//! 4) Height: Number of edges in longest path from X to a leaf.
//~ Just count the number the number of links from X to a leaf.
//~ Height of root node is the longest path to any leaf.
//~ Height of tree is height of root node.

//?                         Binary Tree
//~ A binary tree can be seen as a 2d linked list.

//< typedef struct Node{
//<  int data;
//<  struct Node *left;
//<  struct Node *right;
//< }Node;

//?                               Applications:
//~ 1) Storing naturally hierearchical data: file system, database, etc.
//~ 2) Organize data for quick search: Binary Search Trees
//~ 3) Tries can be used to store dicitonaries, it is used of dynamic spell checking.
//~ 4) Network routing algorithms.

int main(int argc, char *argv[]) {

  void* var = (void*)0;

  return 0;
}