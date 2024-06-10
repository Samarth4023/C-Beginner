#include<iostream>
using namespace std;
int main()
{
	int a,b;
	char op;
	cout<<"Enter the  expression:";
	cin>>a>>op>>b;
	switch(op)
	{
		case '*':
		cout<<"Multiplication is :"<<a*b;
		break;
		case '+':
		cout<<"Addition is : "<<a+b;
		break;
		case '-':
		cout<<"Substraction is : "<<a-b;
		break;
		default:
		cout<<"Please enter valid number.";
	}
	return 0;
}