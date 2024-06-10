#include<iostream>
using namespace std;
class frnd
{
	int a;
	int b;
	public:
		void get()
		{
			cout<<"Enter the value of a : ";
			cin>>a;
			cout<<"Enter the value of b : ";
			cin>>b;
		}
		friend int add(frnd);
};		
int add(frnd g1)
{
	return g1.a+g1.b;
}
int main()
{
	int a,b;
	frnd g1;
	g1.get();
	cout<<"\naddition of two number...";
	cout<<"\naddition is:"<<add(g1);
	return 0;
}
