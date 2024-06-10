#include<iostream.h>
#include<conio.h>
class student
{
	public:
		char name[10];
		int roll_no;
		void getdata();
		void putdata();
};
	void student::getdata()
	{
		cout<<"Enter name...";
		cin>>name;
		cout<<"Enter roll_no...";
		cin>>roll_no;
	}
	void student::putdata()
	{
		cout<<"\nname = "<<name;
		cout<<"\nroll_no = "<<roll_no;
	}
	void main()
	{
		clrscr();
		student s;
		s.getdata();
		s.putdata();
		getch();
	}


