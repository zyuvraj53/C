#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

  // pipe() is used to communicate between processes.
  // pipe() takes in two pointers to ints.
  // They are the file descriptors for the pipe, used to read and write.
  int fd[2];
  // returns 0 if successful, -1 if not.
  if(pipe(fd) == -1){
    printf("An error occurred with opening the pipe.\n"); 
    return 1;
  }
  return 0;
}