#include<stdio.h> 
#include<stdbool.h> 


void checkSomething(){
  int a = 5;
  // this does nothing;
}
int main(int argc, char* argv[]){
  bool b =  5;
  printf("%B\n", b); 
  if(checkSomething()){}
} 