#include <chrono>
#include <iostream>

#include "binaryTrees.hpp"
#include "grapher.hpp"
//#include "binaryTrees.c++"
//#include "grapher.c++"


#define BEGIN \
  auto begin = std::chrono::high_resolution_clock::now();

#define END                                             \
  auto end = std::chrono::high_resolution_clock::now(); \
  std::chrono::duration<float> duration = end - begin;  \
  std::cout << "\n[Finished in " << duration.count() << " seconds]";

#define RED "\e[0;31m"
#define DEFAULT "\e[0m"

int main() {
  BEGIN

  BstNode *root = NULL; // even though we're writing root, this is not the root itself, but the pointer to the root.

  root = insert(root, 256);
  root = insert(root, 128);
  root = insert(root, 512);
  root = insert(root, 300);
  root = insert(root, 600);
  root = insert(root, 129);
  root = insert(root, 127);
  root = insert(root, 290);
  root = insert(root, 400);

  // std::cout << (search(root, 130) == true ? "true" : "false") << std::endl;
  // makeGraph(root);
  // displayGraph();
  printBT(root);
  END 
  return 0;
}