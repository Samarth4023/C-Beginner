#include<iostream.h>
#include<conio.h>
class item
{
	private:
		int A;
		int B;
	public:
		void getdata(int A,int B);
		void putdata();
};
	void item::getdata(int X,int Y)
	{
		A=X;
		B=Y;
	}
	void item::putdata()
	{
		cout<<"\n A="<<A;
		cout<<"\n B="<<B;
	}
	void main()
	{
		clrscr();
		item i;
		i.getdata(8,7);
		i.putdata();
		getch();
	}