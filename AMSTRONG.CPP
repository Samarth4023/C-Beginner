#include<iostream>
#include<conio.h>
int main()
{
	clrscr();
	int n,on,res=0,rem;
	cout<<"Enter any number = ";
	cin>>n;
	on=n;
	while(on>0)
	{
		rem=on%10;
		on=on/10;
		res=res+rem*rem*rem;
	}
	if(res==n)
	{
	cout<<"\n It is Amstrong number";
	}
	else
	{
	cout<<"\n It is not an Amstrong number";
	}
	getch();
	return 0;
}