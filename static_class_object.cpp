#include<iostream>
using namespace std;
class abc
{
	public:
		int i;
		abc()
		{
			i=1;
		}
		~abc()
		{
			cout<<"Destructor";                        
		}
};
void func()
{
	static abc obj;
}
int main()
{
	int x=0;
	if(x==0)
	{
		func();
	}
	cout<<"END";
	return 0;
}