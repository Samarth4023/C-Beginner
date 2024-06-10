#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
class acc
{
	private:
		int acc_no;
		char name[10];
		int bal_accept;
	public:
		int putdata();
		int display();
};
	int acc::putdata()
	{
		cout<<"\n Enter account number..";
		cin>>acc_no;
		cout<<"\n Enter name..";
		cin>>name;
		cout<<"\n Enter balance accept..";
		cin>>bal_accept;
	}
	int acc::display()
	{
		cout<<"\n Account numbers.."<<acc_no;
		cout<<"\n Name is.."<<name;
		cout<<"\n Balance accept is.."<<bal_accept;
	}
	int main()
	{
		acc a[4];
		int i;
		for(i=0;i<2;i++)
		{
			a[i].putdata();
		}
		for(i=0;i<2;i++)
		{
			a[i].display();
		}
		return 0;
	}