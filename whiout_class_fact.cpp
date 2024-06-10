#include<iostream>
using namespace std;

int fact(int n)
{
	int fact=1;
	
	for(int i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	return fact;
}

int main()
{
	int  n;
	cout<<"\nENter the value of n:";
	cin>>n;
	cout<<"\nfactorial of given number is:"<<fact(n);
	return 0;
}