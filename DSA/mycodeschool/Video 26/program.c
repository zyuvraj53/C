#include <stdio.h>
#include <stdlib.h>

//?                                     Binary Tree
//~ We will talk about Binary Tree and then we will talk about a special kind of Binary Tree called Binary Search Tree.
//~ In a Binary Tree, each node can have at most two children.

//~ Kinds of Binary Trees:
//~ 1) Strict/Proper Binary Tree:
//~   A Binary Tree is a tree in which each node has either 0 or 2 children.
//~ 2) Complete Binary Tree:
//~   A Binary Tree is a tree in which each level of the tree, except possibly the last level, are completely filled, and all nodes of the last level are as far left as possible.

//~ There can be levels to a Binary Tree. The root is at Level-0, the next level is Level-1, and so on.
//! Max number of nodes at level i = 2ⁱ

//% Look at PerfectBinaryTree.jpg
//~ The maximum number of nodes in a Tree with height h: 2⁰ + 2¹ + 2² + ... + 2^h = 2^(h+1) - 1
//~                                                                               = 2^(levels) - 1
//~ What will be the height of a Tree with n nodes?
//* n = 2^(h + 1) - 1
//* h = log₂(n + 1) - 1
//~ Height of Complete Binary Tree: 
//* ⌊log₂(n)⌋ 
//~ A Perfect Binary Tree is also a Complete Binary Tree.

//~ Maximum height possible for a Binary Tree with n-nodes: N - 1, this is as good as a Linked List.
//~ Minimum height possible for a Binary Tree with n-nodes: ⌊log₂(n)⌋ 
//~ This is why we like to keep the Binary Tree balanced.
//~ 4) Balanced Binary Tree: Difference between height of left and right subtree for every node is not more than k (mostly 1).
//! Height of empty tree is -1.
//! Height of Tree with one Node is 0.

//~ diff = |height of left subtree - height of right subtree|

//?                             Binary Tree: Implementations
//~ 1) Dynamically created Nodes
//~ 2) Arrays: We number the nodes from left to right in numerically increasing order starting from 0, then fill the array with data, in the same order.
//~ For a complete Binary Tree, for a Node at index i, the index of left child = 2i + 1, right child = 2i + 2.


int main(int argc, char *argv[]) {

  return 0;
}