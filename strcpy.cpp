#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str1[5]="ABC";
	char str2[5];
	strcpy(str2,str1);
	cout<<str2;
	return 0;
}