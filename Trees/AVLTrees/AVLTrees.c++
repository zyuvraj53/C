#include <bits/stdc++.h>
#include <fstream>
#include <iostream>
#include <queue>
#include <string>

#include "AVLTrees.hpp"

AVLNode *getNewNode(int data) {
  AVLNode *newNode = new AVLNode();
  newNode->bf = 0;
  newNode->data = data;
  newNode->left = NULL;
  newNode->right = NULL;

  return newNode;
}

void insert_util(AVLNode **root, int data) {
  if (*root == NULL) {
    *root = getNewNode(data);
  } else if (data <= (*root)->data) {
    insert_util(&(*root)->left, data);
  } else {
    insert_util(&(*root)->right, data);
  }
}

void traverse(AVLNode **root, int data){

  if(data < (*root)->data)
    traverse(&(*root)->left, data);
  else if(data > (*root)->data)
    traverse(&(*root)->right, data);
  
  calcBF(root);

  if((*root)->bf > 1 || (*root)->bf < -1){
    *root = rotate(*root);
    return;
  }
}

void insert(AVLNode **root, int data) {
  insert_util(root, data);
  traverse(root, data);
}

AVLNode *RRrotate(AVLNode *root) {
  AVLNode *temp = root->right;
  root->right = temp->left;
  temp->left = root;
  return temp;
}

AVLNode *LLrotate(AVLNode *root) {
  AVLNode *temp = root->left;
  root->left = temp->right;
  temp->right = root;

  return temp;
}

AVLNode *LRrotate(AVLNode *root) {
  AVLNode *tempB = root->left;
  AVLNode *tempC = root->left->right;

  root->left = tempC->right;
  tempC->right = root;
  tempB->right = tempC->left;
  tempC->left = tempB;

  return tempC;
}

AVLNode *RLrotate(AVLNode *root) {
  AVLNode *tempB = root->right;
  AVLNode *tempC = root->right->left;

  root->right = tempC->left;
  tempC->left = root;
  tempB->left = tempC->right;
  tempC->right = tempB;

  return tempC;
}

int height(AVLNode *root) {
  if (root == NULL)
    return -1;

  int a = height(root->left);
  int b = height(root->right);

  return (a >= b ? a : b) + 1;
}

AVLNode *rotate(AVLNode *root) {

  if(root->bf == 2 && root->left->bf == 1)
    root = LLrotate(root);
  else if(root->bf == 2 && root->left->bf == -1)
    root = LRrotate(root);
  else if(root->bf == -2 && root->right->bf == -1)
    root = RRrotate(root);
  else if(root->bf == -2 && root->right->bf == 1)
    root = RLrotate(root);

  return root;
}

void calcBF(AVLNode **root) {
  (*root)->bf = height((*root)->left) - height((*root)->right);
}

// copied from the net

void printBT(const std::string &prefix, const AVLNode *node, bool isLeft) {
  if (node != nullptr) {
    std::cout << prefix;

    std::cout << (isLeft ? "├──" : "└──");

    // print the value of the node
    std::cout << node->data << std::endl;

    // enter the next tree level - left and right branch
    printBT(prefix + (isLeft ? "│   " : "    "), node->left, true);
    printBT(prefix + (isLeft ? "│   " : "    "), node->right, false);
  }
}

void printBT(const AVLNode *node) {
  printBT("", node, false);
}