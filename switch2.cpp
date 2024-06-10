#include<iostream>
using namespace std;
class swit
{
	public:
		int a,b;
		char op;
	int get()
	{
		cout<<"Enter the expression : ";
		cin>>a>>op>>b;
	}
};
int main()
{
	swit s;
	s.get();
		switch(s.op)
		{
			case '*':
				cout<<"Multiplication is :"<<s.a*s.b;
			break;
			case '+':
				cout<<"Addition is : "<<s.a+s.b;
			break;
			case '-':
				cout<<"Substraction is : "<<s.a-s.b;
			break;
			default:
				cout<<"Please enter valid number.";
	}
	return 0;
}