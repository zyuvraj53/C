#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <stack>

//~     Evaluation of Prefix, and Postfix using Staack

//% A * B + C * D - E
//~ We want to convert the above expression to Postfix
//~ First, we will put paretheses on this expression
//% {(A * B) + (C * D)} - E
//% {(AB*) + (CD*)} - E => {(AB*)(CD*)+} - E
//% {(AB*)(CD*)+}E- => AB*CD*+E-
//? <op1><op2><operator> postfix will always have 2 operands to the left of an operator

//~ An example:
//~ 2 3 * 5 4 * + 9 -
//~ We will have a list in which we'll store the operands as we traverse the list from left to right
//< List: [2, 3]
//~ Operator: * => multiply the last two elements in the list from the right, and store it in the list
//< List: [6]
//< List: [6, 5, 4]
//~ Operator: *
//< List: [6, 20]
//~ Operator: +
//< List: [26]
//< List: [26, 9]
//~ Operator: -
//< List: [17]
//~ Whatever is left in the list is the answer
//% Whatever is coming in last is getting out first, i.e. LIFO - we should be using stack

//! When we do prefix, just go from right to left
//~ Example: - + * 2 3 + 5 4 9
//~ Same logic, have a stack, move from right to left

using namespace std;

// Function to evaluate Postfix expression and return output
int EvaluatePostfix(string expression);

// Function to perform an operation and return output. 
int PerformOperation(char operation, int operand1, int operand2);

// Function to verify whether a character is operator symbol or not. 
bool IsOperator(char C);

// Function to verify whether a character is numeric digit. 
bool IsNumericDigit(char C);

int main() 
{
	string expression; 
	cout<<"Enter Postfix Expression \n";
	getline(cin,expression);
	int result = EvaluatePostfix(expression);
	cout<<"Output = "<<result<<"\n";
}

// Function to evaluate Postfix expression and return output
int EvaluatePostfix(string expression)
{
	// Declaring a Stack from Standard template library in C++. 
	stack<int> S;

	for(unsigned int i = 0;i< expression.length();i++) {

		// Scanning each character from left. 
		// If character is a delimitter, move on. 
		if(expression[i] == ' ' || expression[i] == ',') continue; 

		// If character is operator, pop two elements from stack, perform operation and push the result back. 
		else if(IsOperator(expression[i])) {
			// Pop two operands. 
			int operand2 = S.top(); S.pop();
			int operand1 = S.top(); S.pop();
			// Perform operation
			int result = PerformOperation(expression[i], operand1, operand2);
			//Push back result of operation on stack. 
			S.push(result);
		}
		else if(IsNumericDigit(expression[i])){
			// Extract the numeric operand from the string
			// Keep incrementing i as long as you are getting a numeric digit. 
			int operand = 0; 
			while(i<expression.length() && IsNumericDigit(expression[i])) {
				// For a number with more than one digits, as we are scanning from left to right. 
				// Everytime , we get a digit towards right, we can multiply current total in operand by 10 
				// and add the new digit. 
				operand = (operand*10) + (expression[i] - '0'); 
				i++;
			}
			// Finally, you will come out of while loop with i set to a non-numeric character or end of string
			// decrement i because it will be incremented in increment section of loop once again. 
			// We do not want to skip the non-numeric character by incrementing i twice. 
			i--;

			// Push operand on stack. 
			S.push(operand);
		}
	}
	// If expression is in correct format, Stack will finally have one element. This will be the output. 
	return S.top();
}

// Function to verify whether a character is numeric digit. 
bool IsNumericDigit(char C) 
{
	if(C >= '0' && C <= '9') return true;
	return false;
}

// Function to verify whether a character is operator symbol or not. 
bool IsOperator(char C)
{
	if(C == '+' || C == '-' || C == '*' || C == '/')
		return true;

	return false;
}

// Function to perform an operation and return output. 
int PerformOperation(char operation, int operand1, int operand2)
{
	if(operation == '+') return operand1 +operand2;
	else if(operation == '-') return operand1 - operand2;
	else if(operation == '*') return operand1 * operand2;
	else if(operation == '/') return operand1 / operand2;

	else cout<<"Unexpected Error \n";
	return -1; 
}