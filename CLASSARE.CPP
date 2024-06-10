#include<iostream.h>
#include<conio.h>
class circle
{
	private:
		int radius;
		float area;
	public:
		void getdata();
		void putdata();
};
	void circle::getdata()
	{
		cout<<"Enter radius:";
		cin>>radius;
		area=3.14*radius*radius;
	}
	void circle::putdata()
	{
		cout<<"radius="<<radius;
		cout<<"\n area of circle="<<area;
	}
	void main()
	{
		clrscr();
		circle c;
		c.getdata();
		c.putdata();
		getch();
	}