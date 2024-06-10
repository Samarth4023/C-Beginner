#include<iostream>
using namespace std;
void test(int no)
{
	if(no<11)
	{
		if(no%2==0)
		{
			cout<<"\t"<<no;
		}
		test(no+1);
	}
}
int main()
{
		test(0);
		return 0;
}