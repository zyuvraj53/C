#include <stdio.h>
#include <stdlib.h>

//~ Data Structures: Introduction to Stack

//~ We are only going to talk about Stack as Abstract Data Type, when we talk about a Data Structure as an Abstract Data Type, we only talk about its features/operations, we don't go into the implementation details.

//~ Examples: 1) A stack of plates
//~           2) Tower of Hanoi
//~           3) A stack of tennis balls

//~ This is not just a proerty, but also a constraint or restriction.
//~ Everything must be added on top and removed from the top.
//~ This is why it is also called Last In First Out(LIFO) Collection because
//~ the last added item in the stack has to go out first.

//~ Now, let us formally define stack as an abstract data type:
//~ - A list or collection with the restriction that insertion and deletion can only be performed from one end
//~ There are two fundamental operations available with a stack:
//~ 1) An insertion is called a 'push' operation, a 'push' operation can insert or push some item 'x' onto the stack.
//~ 2) The second operation is called 'pop', 'pop' is called removing the most recent item on the stack.
//~ 3) Typically, there is one more operation called 'top', that simply returns the element on top of the stack
//~ 4)And there can be an operation, 'isEmpty' to check whether the stack is empty or not, returns 'true' if stack is empty, 'false' otherwise.
//~ Example:
//< Stack: []
//> push(2);
//< Stack: [2]
//> push(10);
//< Stack: [2, 10]
//> pop();
//< Stack: [2]
//> push(7);
//> push(5);
//< Stack: [2, 7, 5]
//> top();
//< 5
//> isEmpty();
//< False
//> pop();
//< Stack: [2, 7]
//> pop();
//> pop();
//< Stack: []

//~ Some applications, or scenarios where stack can be used:
//~ For execution of function calls in a program/recursion
//~ For Undo operation in an editor
//~ A compiler can uses it to check whethere parentheses in a source code is balanced or not using stack, corresponding to each opening curly brace, there must be closing parenthesis, and if it is not balanced, then compiler should throw an error.

int main(int argc, char *argv[]) {

  return 0;
}