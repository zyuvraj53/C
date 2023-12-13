#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
  int key;
  struct Node *left;
  struct Node *right;
  int height;
}Node;

int getHeight(Node *);
Node *createNode(int);
int getBalanceFactor(Node *);

int getHeight(Node *node){
  if(node == NULL)
    return 0;
  
  return node->height;
}

Node *createNode(int key){
  Node *node = (Node *)malloc(sizeof(Node));
  node->key = key;
  node->left = NULL;
  node->right = NULL;
  node->height = 1; //% 1 + max(getHeight(node->left), getHeight(node->right));

  return node;
}

int getBalanceFactor(Node *node){
  if(!node)
    return 0;
  return getHeight(node->left) - getHeight(node->right);
}