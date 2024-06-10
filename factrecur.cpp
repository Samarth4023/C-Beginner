#include<iostream>
using namespace std;
class fct
{
	public:
	int fact=1;
int test(int no)
{
	
	
	if(no==1)
	{
	return 1;
		
	}
	else
	{
		
		fact=no * test(no-1);
	}
	return fact;
}
};
int main()
{
	int n,fact;
	fct f;
	cout<<"Enter any number..";
	cin>>n;
	f.test(n);
	cout<<"Factorial of "<<n<<" is.."<<f.fact<<endl;
	return 0;
}