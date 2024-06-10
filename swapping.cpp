#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"\n Enter the value of a before swapping = ";
	cin>>a;
	cout<<"\n Enter the value of b before swapping = ";
	cin>>b;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"\n After swapping value of a is = "<<a;
	cout<<"\n After swapping value of b is = "<<b;
	return 0;
}