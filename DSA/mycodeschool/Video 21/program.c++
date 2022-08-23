//~                       Converting Infix to Postfix using stack

//~ To convert an infix expression to postfix or prefix, we need to apply operator precedence, and associativity

//~ Order of operations:
//~ 1) Parenthesis: () {} []
//~ 2) Exponents: right to left
//~ 3) Multiplication or Division: left to right
//~ 4) Addition or Subtraction: left to right

//~ Example: A + B * C => A + (B * C) => A + (BC*) => A(BC*)+ => ABC*+
//~ This was the way humans think of it, but computers would require an algorithm.

//~ In infix, the operators are not always in the order that they should be executed in, but in postfix, and prefix, the operators are always in the order in which they should be executed.

//~ We will do the conversion again, but this time according to an algorithm.

//% Infix: A + B * C - D * E
//~ If it an operand, then we will append it to a string.
//> A is an operand, so we will append it to the string.
//% Postfix: A 
//~ If it an operator, then we will push it to a stack, a stack is just special kind of list which follows the LIFO principle.
//~ Since + is an operator we cannot append it just yet, as A's right operand hasn't been placed yet.
//< Stack: [+]
//> Next is B, so:
//% PostFix: A B
//~ Well, now that we've placed the operand after A, can we now just place the operator?
//~ NO, because, what's after B also matters, the '*' operator has higher precedence.
//~ Now while parsing from left to right, we are at this multiplication symbol, can we place it?
//~ NO, because, we need to know what's the next operand to B.
//! Important: Any operator having higher precedence than the operator at which we're looking at, can be popped and placed in the postfix string.
//~ The '+' doesn't have higher precedence than '*', so we push it to the stack.
//< Stack: [+, *]
//> Next is C, so:
//% PostFix: A B C
//> Next is '-', since '*' is higher precedence than '-', we pop the stack and append it to the postfix string.
//% PostFix: A B C *
//! '+' and '-' are of the same priority, so we append it to the postfix string.
//% PostFix: A B C * +
//~ We push '-' to the stack.
//< Stack: [-]
//> Next is D, so:
//% PostFix: A B C * + D
//> Next is '*', so we push it to the stack.
//< Stack: [-, *]
//> Next is E, so:
//% PostFix: A B C * + D E
//! Now, there are two ways in which we can find the end of right operand:
/// A) If we get an operator or lesser precedence.
/// B) If we reach the end of a string.
//~ Since we are at the end of a string, we will use B. We will simply pop the stack until we reach the end of the stack.
//% PostFix: A B C * + D E * -

// --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- 

//~ What if we have parentheses in our expression?
//~ There will be slight change in the algorithm, there will be some extra rules, but in general the same principles will be applied.
//~ ((A + B) * C - D) * E
//~ This time the opening parentheses will also be pushed to the stack.
//~ When we get a closing parentheses, we will pop the stack until we reach the opening parentheses, and then pop the opening parentheses too.
//< Stack: [(, (]
//> Next is A, so:
//% PostFix: A
//< Stack: [(, (, +]
//> Next is B, so:
//% PostFix: A B
//~ We hit a cloisng parenthesis, so we pop until we reach the opening parenthesis, and then pop that too.
//% A B +
//< Stack: [(]
//> Next is '*', so:
//< Stack: [(, *]
//> Next is C, so:
//% PostFix: A B + C
//> Next is '-', so:
//~ Since '*' has higher precedence than '-', we pop the stack and append it to the postfix string.
//% PostFix: A B + C *
//> Next is D, so:
//% PostFix: A B + C * D
//~ We hit a closing parenthesis, so we pop until we reach the opening parenthesis, and then pop that too.
//% A B C * D -
//< Stack: []
//> Next is '*', so:
//< Stack: [*]
//> Next is E, so:
//% PostFix: A B + C * D - E
//~ We reached the end of string, so we pop the stack until we reach the end of the stack.
//% A B C * D - E *
//< Stack: []

/*
  Infix to postfix conversion in C++ 
  Input Postfix expression must be in a desired format. 
  Operands and operator, both must be single character.
  Only '+'  ,  '-'  , '*', '/' and '$' (for exponentiation)  operators are expected. 
*/
#include<iostream>
#include<stack>
#include<string>

using namespace std;

// Function to convert Infix expression to postfix 
string InfixToPostfix(string expression);

// Function to verify whether an operator has higher precedence over other
int HasHigherPrecedence(char operator1, char operator2);

// Function to verify whether a character is operator symbol or not. 
bool IsOperator(char C);

// Function to verify whether a character is alphanumeric chanaracter (letter or numeric digit) or not. 
bool IsOperand(char C);

int main() 
{
	string expression; 
	cout<<"Enter Infix Expression \n";
	getline(cin,expression);
	string postfix = InfixToPostfix(expression);
	cout<<"Output = "<<postfix<<"\n";
}

// Function to evaluate Postfix expression and return output
string InfixToPostfix(string expression)
{
	// Declaring a Stack from Standard template library in C++. 
	stack<char> S;
	string postfix = ""; // Initialize postfix as empty string.
	for(int i = 0;i< expression.length();i++) {

		// Scanning each character from left. 
		// If character is a delimitter, move on. 
		if(expression[i] == ' ' || expression[i] == ',') continue; 

		// If character is operator, pop two elements from stack, perform operation and push the result back. 
		else if(IsOperator(expression[i])) 
		{
			while(!S.empty() && S.top() != '(' && HasHigherPrecedence(S.top(),expression[i]))
			{
				postfix+= S.top();
				S.pop();
			}
			S.push(expression[i]);
		}
		// Else if character is an operand
		else if(IsOperand(expression[i]))
		{
			postfix +=expression[i];
		}

		else if (expression[i] == '(') 
		{
			S.push(expression[i]);
		}

		else if(expression[i] == ')') 
		{
			while(!S.empty() && S.top() !=  '(') {
				postfix += S.top();
				S.pop();
			}
			S.pop();
		}
	}

	while(!S.empty()) {
		postfix += S.top();
		S.pop();
	}

	return postfix;
}

// Function to verify whether a character is english letter or numeric digit. 
// We are assuming in this solution that operand will be a single character
bool IsOperand(char C) 
{
	if(C >= '0' && C <= '9') return true;
	if(C >= 'a' && C <= 'z') return true;
	if(C >= 'A' && C <= 'Z') return true;
	return false;
}

// Function to verify whether a character is operator symbol or not. 
bool IsOperator(char C)
{
	if(C == '+' || C == '-' || C == '*' || C == '/' || C== '$')
		return true;

	return false;
}

// Function to verify whether an operator is right associative or not. 
int IsRightAssociative(char op)
{
	if(op == '$') return true;
	return false;
}

// Function to get weight of an operator. An operator with higher weight will have higher precedence. 
int GetOperatorWeight(char op)
{
	int weight = -1; 
	switch(op)
	{
	case '+':
	case '-':
		weight = 1;
	case '*':
	case '/':
		weight = 2;
	case '$':
		weight = 3;
	}
	return weight;
}

// Function to perform an operation and return output. 
int HasHigherPrecedence(char op1, char op2)
{
	int op1Weight = GetOperatorWeight(op1);
	int op2Weight = GetOperatorWeight(op2);

	// If operators have equal precedence, return true if they are left associative. 
	// return false, if right associative. 
	// if operator is left-associative, left one should be given priority. 
	if(op1Weight == op2Weight)
	{
		if(IsRightAssociative(op1)) return false;
		else return true;
	}
	return op1Weight > op2Weight ?  true: false;
}