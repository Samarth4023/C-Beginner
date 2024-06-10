#include<iostream>
using namespace std;
class fct
{
	public:
		int i,fact=1,n;
int get(int n)
{
	
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	return fact;
}
};
int main()
{
	int i,fact=1,n;
	fct f;
	cout<<"Enter any number..";
	cin>>n;
	cout<<"Factorial of "<<n<<" is.."<<f.get(n)<<endl;
	return 0;	
}