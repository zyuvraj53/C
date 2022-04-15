#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Point {
  int x,y;
} Point;

void Process(Point q){
  // ---Some Processes---
  q.x += 5;
  printf("%d %d\n", q.x, q.y); 
}

int main(int argc, char *argv[]) {
  Point p = {
    .x = 10,
    .y = 25
  };
  char buf[100];

  Process(p);

  snprintf(buf, 100, "%d %d\n", p.x, p.y);

  printf("%s", buf);

  return 0;
}