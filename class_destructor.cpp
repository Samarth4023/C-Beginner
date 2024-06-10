#include<iostream>
using namespace std;
class test
{
	public:
	test()
	{
		cout<<"abc";
	}
	~test()
	{
		cout<<"destructor";
	}
};
int main()
{
	test t1;
	return 0;
}