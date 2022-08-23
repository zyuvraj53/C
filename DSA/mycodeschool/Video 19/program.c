#include <stdio.h>
#include <stdlib.h>

//~ Infix, Postfix, and Prefix

//~ Order of operations:
//~ 1) Parenthesis: () {} []
//~ 2) Exponents: right to left
//~ 3) Multiplication or Division: left to right
//~ 4) Addition or Subtraction: left to right

//~ Evaluation of expressions:

//% 2 - 3
//% A - B
//% (p * 2)

//? This is 'infix' notation
//% <operand><operator><operand>
//? Operator is the object on which the operation is performed.
//~ An operand can be an expression itself, eg.: (2 + 3) * 4
//~ An even more complex expression, where bothe the operands are expessions, 
//~ (p + q) * (r + s)

//~ prefix notation is also called Forward Polish Notation
//~ postfix notation is also called Reverse Polish Notation
//~ Computers have it easiest to decode when it is Reverse Polish Notation, however prefix is also good, at least better than infix

int main(int argc, char *argv[]) {

  return 0;
}