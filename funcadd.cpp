
#include<iostream>
using namespace std;
int add(int a,int b)
{
	return a+b;
}
int main()
{
	int a,b,addi;
	cout<<"Enter the value of a : ";
	cin>>a;
	cout<<"Enter the value of b : ";
	cin>>b;
	addi=add(a,b);
	cout<<"Addition is..."<<addi;
	return 0;
}
-