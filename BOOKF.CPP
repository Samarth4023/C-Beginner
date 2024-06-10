#include<iostream.h>
#include<conio.h>
class book
{
	private:
		char book_name[20];
		char author[20];
		float price;
	public:
		void accept()
	{
		cout<<"\n book_name:";
		cin>>book_name;
		cout<<"\n author:";
		cin>>author;
		cout<<"\n price:";
		cin>>price;

	}
void display(book b1,book b2)
{

	if(b1.price>b2.price)
	{
	cout<<"\n book_name:"<<b1.book_name<<"\n author:"<<b1.author<<"\n price:"<<b1.price;
	}
	else
	{
	  cout<<"\n book_name:"<<b2.book_name<<"\n author:"<<b2.author<<"\n price:"<<b2.price;
	}

}
};
void main()
{
	clrscr();
	book b1,b2,b3;
	b1.accept();
	b2.accept();
	b3.display(b1,b2);
	getch();
}