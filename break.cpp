#include<iostream>
using namespace std;
int main()
{
	int cnt=0;
	do
	{
		cout<<"Value"<<cnt<<endl;
		cnt++;
		if(cnt>5)
		{
			break;
		}
	}
	while(cnt<10);
	return 0;
}
	