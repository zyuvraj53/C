#include <stdio.h>
#include <stdlib.h>

//~                     Data Structures: Array Implementation of Queue

//~ There are two pointers, front and rear
//~ Elements must go in from the rear, and come out of the front, just like in a real-world queue.
//~ to dequeue, we just increment the front pointer, and we increment the rear pointer every time our queue fills up.

//~ We will initialize front and rear with -1 to signify that the array is empty.

//~ Enqueue - If Queue isFull()
//~               return null
//~           else if Queue isEmpty()
//~               front <- rear <- 0
//~           else
//~               rear <- rear + 1
//~           A[rear] = x

//~ Dequeue - If Queue isEmpty()
//~               return null
//~           else if front == rear
//~               front <- rear <- -1
//~           else
//~               front <- front + 1

//~ But there is a problem as we enqueue, and dequeue, the cells to the front are now inaccessible, and cannot be further used to store any data, with more and more dequeues, the array will get shorter and shorter.
//~ So, we will use a circular array.

//~ Current Position - i
//~ Next Position - (i + 1) % N => For any i other than N-1, this modulo will not have any effect, but for N-1, next position will be N%N, which will be 0, so we're back at the start of the array, previous position will be (i + N - 1)%N
//~ So, that means now, the implementation of the functions will now change.

//~ Enqueue - If (rear + 1) % N == front :
//~               return null
//~           else if Queue isEmpty() :
//~               front <- rear <- 0
//~           else :
//~               rear <- (rear + 1) % N
//~           A[rear] <- x

//~ Dequeue - If Queue isEmpty()
//~               return null
//~           else if front == rear
//~               front <- rear <- -1
//~           else
//~               front <- (front + 1) % N


int main(int argc, char *argv[]) {

  return 0;
}