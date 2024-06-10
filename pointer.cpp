#include<iostream>
using namespace std;
int main()
{
	int a=10;
	int *p;
	p=&a;
	cout<<"\n Value of a is : "<<a;
	cout<<"\n Value using pointer is : "<<*p;
	cout<<"\n Address of variable in memory is : "<<p;
	return 0;
}