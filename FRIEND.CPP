#include<iostream.h>
#include<conio.h>
class test
{
	private:
		int x,y;
	public:
		void input()
	{
		cout<<"Enter 2 numbers..";
		cin>>x>>y;
	}
		friend void find(test t);
};
		void find(test t)
	{
		if(t.x<t.y)
		{
		cout<<"The smallest is:"<<t.x;
		}
		else
		{
		cout<<"The smallest is:"<<t.y;
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


