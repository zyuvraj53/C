#include <stdio.h>
#include <stdlib.h>

//~                             Data Structures: Introduction to Queues

//~ Queue ADT
//~ FIFO - Whatever goes in first, comes out first
//~ Formal definition

//~ A list or collection with the restriction that insertion can be performed at one end (rear or tail), and deletion can be performed at other end (front or head).

//~ Operations with queue:
//~ 1) Enqueue(x) or push(x) !- In C++, it's push(x), and in C# it's enqueue.
//~ 2) Dequeue(x) or pop(x)
//~ 3) Front() or peak() - to look at the head
//~ 4) isEmpty()
//% But push and pop are more popular for stack
//~ These functions must take constant time.

//~ Example
//> Enqueue(2)
//< Queue: [2]
//> Enqueue(3)
//< Queue: [2, 3]
//> Enqueue(5)
//< Queue: [2, 3, 5]
//> Dequeue()
//< Queue: [3, 5]
//> front()
//< 5
//> Dequeue()
//< Queue: [5]

//~ Uses of Queue:
//~ 1) In scenarios where we have a lot of requests, it makes sense that we queue up the requests, the requests which come first, are served first.
//% Let's say we have a printer in a network, and any machine in this network can request to print something, and the printer can serve only 1 request at a time.
//~ 2) Process Scheduling
//~ 3) Simulating Wait

int main(int argc, char *argv[]) {

  return 0;
}