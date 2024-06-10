#include<iostream>
using namespace std;
class fct
{
	public:
	int fact=1;
int fact(int a);
{
	if(a==1)
	{
		return 1;
	}
	else
	{
		fact=a*fact(a-1);
	}
	return fact;
}
};
int main();
{
		int a,fact;
		fct f;
		f.fact(a);
		cout<<"enter any number: ";
		cin>>a;
		cout<<"factorial of.. "<<a<<"is.."<<f.fact;
		return 0;
}
		
		