#include <chrono>
#include <iostream>

#include "grapher.hpp"
#include "AVLTrees.hpp"

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

  AVLNode *root = NULL;
  insert(&root, 128);
  insert(&root, 64);
  insert(&root, 32);
  insert(&root, 192);
  insert(&root, 176);

  makeGraph(root);
  displayGraph();


  END return 0;
}