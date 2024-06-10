#include<iostream.h>
#include<conio.h>
int main()
{
	clrscr();
	int n,on,rev=0,rem;
	cout<<"Enter any number = ";
	cin>>n;
	on=n;
	while(on>0)
	{
		rem=on%10;
		on=on/10;
		rev=rev*10+rem;
	}
	if(rev==n)
	{
	cout<<"\n It is palindrome";
	}
	else
	{
	cout<<"\n It is not Palindrome";
	}
	getch();
	return 0;
}