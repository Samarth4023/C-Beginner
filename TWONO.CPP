#include<iostream.h>
#include<conio.h>
class test
{
	private:
		int x,y;
	public:
		void input()
		{
		cout<<"Enter two numbers..";
		cin>>x>>y;
		}
		friend void find(test t);
};
		void find(test t)
{
		if(t.x<t.y)
		{
		cout<<"\n The smallest is:"<<t.x;
		}
		else
		{
		cout<<"\n The smallest is:"<<t.y;
		}                 
}
	void main()
	{
		clrscr();
		test t;
		t.input();
		find(t);
		getch();
	}