#include <stdio.h>
#include <stdlib.h>

//?                                     Binary Search Tree

//~ It is a special kind of Binary Tree which is an efficient structure to organize data for quick search as well as quick update.

//~ What data structure should we use to store a modifiable collection?
//~ --We can use an Array or a Linked List, these are two well-known data structures to store modifiable collection.
//~ However, let's see their running time. 
//$ Array--
//~ Searching - O(n)
//~ Inserting - O(1), if array is large enough, otherwise O(n)
//~ Removal - O(n)
//$ Linked List--
//~ Searching - O(n)
//~ Inserting - O(1) always
//~ Removal - O(n), because we will first have to search the records.

//~ However, if our array is sorted then, Searching becomes O(log n), but Insertion also becomes O(log n) because we first have to search where we should insert it, but it is still O(n) in worst case because we will still have to shift the array, so:
//$ Sorted Array--
//~ Searching - O(log n)
//~ Inserting - O(n) 
//~ Removal - O(n), because we will first have to search the records.

//~ For n records, we will have at max log₂n comparisons
//~ If 1 comparison is 10^(-6), then if n = 2³¹ => time is 31*10^(-6)

//$ Binary Search Tree(Balanced)--
//~ Searching - O(log n)
//~ Inserting - O(log n) 
//~ Removal - O(log n)
//$Binary Search Tree(Unbalanced)--
//~ Searching - O(n)
//~ Inserting - O(n) 
//~ Removal - O(n)

//~ BSTs - Binary Tree in which for each node, the value of the left node is lesser or equal and the value of the right node is greater.


int main(int argc, char *argv[]) {

  int a = 5;
  fprintf(stdout, "This is a, a = %d.\n", a);

  return 0;
}