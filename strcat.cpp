#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str1[5]="ABC";
	char str2[5]="DEF";
	string str;
	str=strcat(str1,str2);
	cout<<str;
	return 0;
}