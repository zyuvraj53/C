//pg 64

#include<stdio.h> 
#include<stdlib.h> 

int main(int argc, char* argv[]){

  char name[40];
  printf("Enter your name: ");
  scanf("%39s", name);
  printf("Your name is: ", name);

  return 0; 
} 