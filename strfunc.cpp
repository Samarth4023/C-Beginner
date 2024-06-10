#include<iostream>
#include<string.h>
using namespace std;
class login
{
	public:
		char u_name[20],u_name1[20];
		string pass,pass1;
		void regi()
		{
			cout<<"Enter u_name : ";
			cin>>u_name;
			cout<<"Enter pass : ";
			cin>>pass;
		}
		void log()
		{
			cout<<"Enter u_name : ";
			cin>>u_name1;
			cout<<"Enter pass1: ";
			cin>>pass1;
		}

int main()
{
	login l;
	l.regi();
	l.log();
		if(strcmp(l.u_name,l.u_name1)==0 && l.pass==l.pass1)
		{
			cout<<"Login successfully";
		}
		else
		{
			cout<<"Login Failed";
		}
		return 0;
}