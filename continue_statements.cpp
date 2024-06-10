#include<iostream>
using namespace std;
int main()
{
	int cnt = 0;
	do
	{
		cnt++;
		if(cnt>5 && cnt<10)
		{
			continue;
		}
		cout<<"Value:"<<cnt<<endl;
	}
	while(cnt<11);
	return 0;
}