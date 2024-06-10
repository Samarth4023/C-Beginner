#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str1[5]="ABC";
	char str2[5];
	cout<<"Enter str2 : ";
	cin>>str2;
	if(strcmp(str1,str2)==0)
	{
		cout<<"str1=str2";
	}
	else
	{
		cout<<"str1!=str2";
	}
	return 0;
}