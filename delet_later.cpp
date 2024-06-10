#include<iostream>
using namespace std;
void test(int no)
{
	if(no<10)
	{
			cout<<"\n"<<no;
			test(no+2);
	}
}
int main()
{
		test(2);
		return 0;
}