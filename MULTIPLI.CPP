#include<iostream.h>
#include<conio.h>
int main()
{
	clrscr();
	int i,n;
	cout<<"Enter any number..";
	cin>>n;
	for(i=1;i<=10;i++)
	{
	 cout<<n<<"*"<<i<<"="<<n*i<<endl;
	}
	getch();
	return 0;
}