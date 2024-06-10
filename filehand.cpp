#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{
	string F;
	fstream newfile;
	cout<<"Enter file name : ";
	cin>>F;
	newfile.open(F,ios::out);
	
	if(!newfile)
	{
		cout<<"FAILED";
	}
	else
	{
		
		cout<<"SUCCESS";
	}
	newfile.close();
	return 0;
}
