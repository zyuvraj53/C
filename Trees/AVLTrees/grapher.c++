#include <iostream>
#include <fstream>

#include "AVLTrees.hpp"
#include "grapher.hpp"

void makeGraph(AVLNode *root) {
  std::fstream grapher;
  grapher.open("graph.gv", std::ios::out);

  if (grapher.is_open()) {
    grapher << "graph {\n";
    grapherPreorderTraversal(root, grapher);
    grapher << "}";
    grapher.close();
  }
}

void grapherPreorderTraversal(AVLNode *root, std::fstream &file) {
  if (root == NULL)
    return;
  if(root -> left == NULL && root -> right != NULL){
    file << root->data << "--";
    file << (root->right)->data << "\n";
    grapherPreorderTraversal(root->right, file);
  }else if(root -> right == NULL && root -> left != NULL){
    file << root->data << "--";
    file << (root->left)->data << "\n";
    grapherPreorderTraversal(root->left, file);
  }else if(root -> left != NULL && root -> right != NULL){
    file << root->data << "--";
    file << (root->left)->data << "\n";
    file << root->data << "--";
    file << (root->right)->data << "\n";
    grapherPreorderTraversal(root->left, file);
    grapherPreorderTraversal(root->right, file);
  }
}

void displayGraph(){
  system("dot -Tsvg graph.gv -o graph.svg");
  system("graph.svg");
}
