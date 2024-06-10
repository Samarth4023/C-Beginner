#include<iostream.h>
#include<conio.h>
class city
{
	private:
		char city_name[10];
		float population;
	public:
		void accept()
	{
		cout<<"\n city_name:";
		cin>>city_name;
		cout<<"\n population:";
		cin>>population;
	}
	void display()
	{
		cout<<"\n city_name:"<<city_name;
		cout<<"\n population:"<<population;
	}
	};
	void main()
	{
		clrscr();
		city c[10];
		int i;
		for(i=0;i<10;i++)
		{
			c[i].accept();
		}
		for(i=0;i<10;i++)
		{
			c[i].display();
		}
		getch();
	}