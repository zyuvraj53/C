#ifndef binaryTrees_h

#define binaryTrees_h

#include <fstream>

typedef struct BstNode {
  int data;
  BstNode *left;
  BstNode *right;
} BstNode;

// Normal Functions
BstNode *insert(BstNode *, int);
BstNode *getNewNode(int);
bool search(BstNode *, int);
int findMin(BstNode *);
int findMax(BstNode *);
int findHeightRecursive(BstNode *);
int max(int, int);
void levelOrderTraversal(BstNode *);
void preorder(BstNode *);
void inorder(BstNode *);
void postorder(BstNode *);
bool isBstUtil(BstNode *);
bool isBinarySearchTree(BstNode *);
BstNode *deleteNode(BstNode *, int);
BstNode *findMinNode(BstNode *);
// Redundant Recursive Functions
int findMinRecursive(BstNode *);
int findMaxRecursive(BstNode *);

//copied from the net
void printBT(const std::string&, const BstNode*, bool);
void printBT(const BstNode*);

#endif //!binaryTrees_h