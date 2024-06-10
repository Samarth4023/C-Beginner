#include<iostream>
#include<string.h>
using namespace std;
string sam(char str1[5],char str2[5])
{
	string str=strcat(str1,str2);
	
	return  str;

}
int main()
{
	char str1[5],str2[5];
	cout<<"\nEnter first string:";
	cin>>str1;
	cout<<"\neneter secobnd string:";
	cin>>str2;
	cout<<sam(str1,str2);
	return 0;
}