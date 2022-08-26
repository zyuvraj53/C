#include <iostream>
#include <chrono>

#define BEGIN   \
  auto begin = std::chrono::high_resolution_clock::now(); 

#define END   \
  auto end = std::chrono::high_resolution_clock::now();\
  std::chrono::duration<float> duration = end - begin;\
  std::cout << "\n[Finished in " << duration.count() << " seconds]";

int main() {
  BEGIN

  for (int i = 0; i < 100; i++)
    std::cout << i << "\n";

  END 
  return 0;
}