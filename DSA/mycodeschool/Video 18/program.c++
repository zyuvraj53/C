#include <stdio.h>
#include <stdlib.h>

#include<iostream>
#include<stack>
#include<string>
using namespace std;

//~ Check for balanced parentheses

//% What is inseide the parenthses does not matter, we are not checking for the correctness of the expression, rather just the balancing of the parentheses

//~ One might think we can just count the number of opening and closing parenth3ses of each type, and they'd be equal, but that won't be good enough, eg.: )(, [(])

//% Anything which is opened last should be closed first, ie. LIFO - stack

bool ArePair(char opening,char closing)
{
	if(opening == '(' && closing == ')') return true;
	else if(opening == '{' && closing == '}') return true;
	else if(opening == '[' && closing == ']') return true;
	return false;
}

bool AreParanthesesBalanced(string exp)
{
	stack<char>  S;
	for(int i =0;i<exp.length();i++)
	{
		if(exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
			S.push(exp[i]);
		else if(exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
		{
			if(S.empty() || !ArePair(S.top(),exp[i]))
				return false;
			else
				S.pop();
		}
	}
	return S.empty() ? true:false;
}

int main()
{
	/*Code to test the function AreParanthesesBalanced*/
	string expression;
	cout<<"Enter an expression:  "; // input expression from STDIN/Console
	cin>>expression;
	if(AreParanthesesBalanced(expression))
		cout<<"Balanced\n";
	else
		cout<<"Not Balanced\n";
}