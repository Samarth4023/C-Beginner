#include<iostream>
using namespace std;
int get(int a,int b,int c)
{
	if(a>b && a>c)
	{
		return a;
	}
	else if(b>a && b>c)
	{
		return b;
	}
	else if(c>a && c>b)
	{
		return c;
	}	
}
int main()
{
	int a,b,c;
	cout<<"\n Enter the value of a :";
	cin>>a;
	cout<<"\n Enter the value of b :";
	cin>>b;
	cout<<"\n Enter the value of c :";
	cin>>c;
	cout<<"gretest value  is:"<<get(a,b,c);
	return 0;
}
