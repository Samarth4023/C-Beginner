#include<iostream.h>
#include<conio.h>
int main()
{
	clrscr();
	int i,fact=1,num;
	cout<<"Enter any number..";
	cin>>num;
	for(i=1;i<=num;i++)
	{
		fact=fact*i;
	}
	cout<<"Factorial of "<<num<<" is.."<<fact<<endl;
	getch();
	return 0;
}