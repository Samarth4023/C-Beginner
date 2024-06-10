#include<iostream>
using namespace std;
int swap(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	cout<<"\n After swapping value of a is = "<<a;
	cout<<"\n After swapping value of b is = "<<b;
}
int main()
{
		int a,b,temp;
		cout<<"Enter the value of a : ";
		cin>>a;
		cout<<"Enter the value of b : ";
		cin>>b;
		swap(a,b);
		return 0;
}
	