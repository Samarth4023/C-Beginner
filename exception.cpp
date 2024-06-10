#include<iostream>
#include<exception>
using namespace std;
class age:public exception
{
	public:
		void error()
		{
			cout<<"invalid age...";
		}
};
int main()
{
	int a;
	cout<<"Enter the age : ";
	cin>>a;
try
{
	if(a<18)
	{
		throw age();
	}
	else
	{
		cout<<"Age is valid...";
	}
}
catch(age a)
{
		a.error();
}
	return 0;
}