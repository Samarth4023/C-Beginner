#include<iostream>
#include<exception>
#include<string.h>
using namespace std;
class login:public exception
{
	public:
		void error()
		{
			cout<<"Wrong password...";
		}
};



int main()
{
	char u_name1[10],u_name2[10];
	
	string p1,p2;
	
	cout<<"Enter user name : ";
	cin>>u_name1;
	cout<<"Enter the password : ";
	cin>>p1;
	
	
	cout<<"Enter user name : ";
	cin>>u_name2;
	cout<<"Enter the password : ";
	cin>>p2;
try
{
	if(strcmp(u_name1,u_name2)==0 && p1==p2)
	{
		cout<<"Login success...";
		
	}
	else
	{
		
		throw login();
	}
}
catch(login l)
{
		l.error();
}
	return 0;
}