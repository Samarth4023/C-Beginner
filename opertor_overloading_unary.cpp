#include<iostream>
using namespace std;
class A
{
	public:
		int a;
		void get()
		{
			cout<<"Enter the value for a : ";
			cin>>a;
		}
		void show()
		{
				cout<<"\n a : "<<a;
		}
		void operator++(int a)
		{
			a=a++;
		}
};
int main()
{
	A a2;
	a2.get();
	a2.show();
	a2++;
	a2.show();
	return 0;
}