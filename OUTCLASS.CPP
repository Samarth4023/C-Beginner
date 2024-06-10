#include<iostream.h>
#include<conio.h>
class item
{
	private:
		int A;
		int B;
		int c;

	public:
		void getdata(int X,int Y);
		void putdata();
};
	 void item::getdata(int X,int Y)
	 {
	    A=X;
	    B=Y;
	    c=A+B;
	 }
	 void item::putdata()
	 {
	    cout<<"\n A="<<A<<endl;
	    cout<<"\n B="<<B<<endl;
	    cout<<"\n C="<<c;
	 }
	 void main()
	 {
		clrscr();
		item i;
		item i2;
		i.getdata(10,20);
		i2.getdata(30,40);
		i.putdata();
		i2.putdata();
		getch();
	 }
