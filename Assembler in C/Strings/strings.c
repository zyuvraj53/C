#include<stdio.h> 

int main(int argc, char* argv[]){

  char a[1024] = "Hello there. I am writing code right now";

  if (a == "Hello there. I am writing code right now.")
    printf("Yes, this is correct.\n"); 
  else
    printf("No, this is incorrect.\n"); 

  return 0;
} 