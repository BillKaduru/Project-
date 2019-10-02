/*
This Program will calculator operations 
using the three operators -
%
*/
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std; 
int main()

{
	
	const string ASSIGN_OP = " = " ;
	const char SPACE = ' ';
	double num1, num2;
	char charOp;

	cout << "Welcome! Enter your equation (e.g. 10 + 5): ";
	cin >> num1 >> charOp >> num2;
	
	switch (charOp)
	{
	case '+': 
		cout << num1 << charOp << num2 << ASSIGN_OP << num1 + num2 << endl;
		break; 
	case '-': 
		cout << num1 << charOp << num2 << ASSIGN_OP << num1 - num2 << endl;
		break; 
	case '*':
		cout << num1 << charOp << num2 << ASSIGN_OP << num1 * num2 << endl;
		break; 
	case '%':
		cout << num1 << charOp << num2 << ASSIGN_OP << (int)num1 % (int)num2 << endl;
	case '/':
		if (num2 != 0)
			cout << num1 << charOp << num2 << ASSIGN_OP << num1 / num2 << endl;
		else cout << " CANNOT DIVIDE BY ZERO " << endl;
		break;
	
	default: 
		cou

}

}