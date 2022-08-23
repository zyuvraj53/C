#include <chrono>
#include <iostream>

//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

//~ Even though this is C++, it is written like C, because the instructor does not know C++ that well.

//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

#define BEGIN \
  auto begin = std::chrono::high_resolution_clock::now();

#define END                                             \
  auto end = std::chrono::high_resolution_clock::now(); \
  std::chrono::duration<float> duration = end - begin;  \
  std::cout << "\n[Finished in " << duration.count() << " seconds]";

//~                            Binary Search Tree - Implementation in C/C++

typedef struct BstNode {
  int data;
  BstNode *left;
  BstNode *right;
} BstNode;

BstNode * insert(BstNode *, int);
BstNode *getNewNode(int);

int main() {
  BEGIN

  BstNode *root = NULL; // even though we're writing root, this is not the root itself, but the pointer to the root.

  root = insert(root, 15);
  root = insert(root, 10);
  root = insert(root, 10);

  END return 0;
}

BstNode *insert(BstNode *root, int data) {
  if (root == NULL) {
    root = getNewNode(data);
    return root;
  }
}

BstNode *getNewNode(int data) {
  BstNode *newNode = new BstNode();
  newNode->data = data;
  newNode->left = newNode->right = NULL;

  return newNode;
}