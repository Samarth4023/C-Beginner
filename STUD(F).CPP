#include<iostream.h>
#include<conio.h>
class student
{
	public:
		int roll_no;
		char name[10];
		void getdata();
		void putdata();
};
	void student::getdata()
	{
		cout<<"Enter Roll_no = ";
		cin>>roll_no;
		cout<<"Enter Name = ";
		cin>>name;
	}
	void student::putdata()
	{
		cout<<"\n ROLL_NO = "<<roll_no;
		cout<<"\n NAME = "<<name;
	}
	void main()
	{
		clrscr();
		student s;
		s.getdata();
		s.putdata();
		getch();
	}