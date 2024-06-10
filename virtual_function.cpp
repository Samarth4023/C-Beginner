#include<iostream>
using namespace std;
class A
{
	public:
		virtual void display()=0;
};
class B:public A
{
	int a;
	public:
	B(int a1)
	{
		a=a1;
	}
	void display()
	{
		cout<<"\n value is = "<<a;
	}
};
class C:public A
{
	int b;
	public:
	C(int a1)
	{
		b=a1;
	}
	void display()
	{
		cout<<"\n value is = "<<b;
	}
};
int main()
{
	A *b;
	B b1(2);
	C c1(5);
	b=&b1;
	b->display();
	b=&c1;
	b->display();
	return 0;
}