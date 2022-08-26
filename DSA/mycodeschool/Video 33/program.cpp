#include <iostream>
#include <chrono>

#define BEGIN   \
  auto begin = std::chrono::high_resolution_clock::now(); 

#define END   \
  auto end = std::chrono::high_resolution_clock::now();\
  std::chrono::duration<float> duration = end - begin;\
  std::cout << "\n[Finished in " << duration.count() << " seconds]";

//~                       Binary Search Tree - Level Order Traversal

int main() {
  BEGIN

  

  END 
  return 0;
}