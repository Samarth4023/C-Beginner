#include<iostream.h>
#include<conio.h>
class staff
{
	private:
		char name[20];
		float basic_salary,DA,HRA,gross_salary;
	public:
		void accept()
	{
		cout<<"\n name:";
		cin>>name;
		cout<<"\n basic_salary:";
		cin>>basic_salary;
	}
void display()
{
	DA=0.75*basic_salary;
	HRA=0.30*basic_salary;
	gross_salary=basic_salary+DA+HRA;
	cout<<"\n DA="<<DA;
	cout<<"\n HRA="<<HRA;
	cout<<"\n gross_salary ="<<gross_salary;
}
};
void main()
{
	clrscr();
	staff s,s1;
	s.accept();
	s.display();
	s1.accept();
	s1.display();
	getch();
}