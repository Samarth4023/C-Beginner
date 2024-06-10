#include<iostream>
using namespace std;
void test(int no)
{
	if(no<10)
	{
			cout<<"\n shlok  \t"<<no;
			test(no+1);
	}
}
int main()
{
		test(0);
		return 0;
}