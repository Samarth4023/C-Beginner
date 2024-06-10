#include<iostream>
using namespace std;
void test(int no)
{
	if(no<11)
	{
		
		if(no<0)
		{
			cout<<"\nNegative number:";
			cout<<"\t"<<no;
		}
		
		if(no>0)
		{
			cout<<"\nPositive number:";
			cout<<"\t"<<no;
		}
			test(no+1);
	}
}
int main()
{
		test(-10);
		return 0;
}