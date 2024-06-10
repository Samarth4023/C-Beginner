#include<iostream>
using namespace std;
int main()
{
	int n=0;
	do
	{
		label1:if(n%2==0)
		{
				cout<<"\t"<<n;
		}
		if(n==4)
		{
			n++;
			goto label1;
		}
		cout<<"\n"<<n;
		n++;
	}
	while(n<11);	
	return 0;
}