#include<iostream.h>
#include<conio.h>
class student
{
	private:
		int roll_no;
		char name[10];
		int mobile_no;
		char address[30];
	public:
		void getdata();
		void putdata();
};
	 void student::getdata()
	 {
		cout<<"\n roll_no:";
		cin>>roll_no;
		cout<<"\n name:";
		cin>>name;
		cout<<"\n mobile_no:";
		cin>>mobile_no;
		cout<<"\n address:";
		cin>>address;
	 }
	 void student::putdata()
	 {
		cout<<"\n roll_no:"<<roll_no;
		cout<<"\n name:"<<name;
		cout<<"\n mobile_no:"<<mobile_no;
		cout<<"\n address:"<<address;
	 }
	 void main()
	 {
		clrscr();
		student s;
		s.getdata();
		s.putdata();
		getch();
	 }
