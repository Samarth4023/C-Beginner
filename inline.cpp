#include<iostream>
using namespace std;
class item
{
	private:
		int a;
		int b;
		int add;
	public:
		void accept();
		void display();
};
	 inline void item::accept()
	 {
	    cout<<"Enter the value for a : ";
		cin>>a;
		cout<<"Enter the value for b : ";
	    cin>>b;
		add=a+b;
	 }
	 inline void item::display()
	 {
	    cout<<"\n Addition = "<<add<<endl;
	 }
	 int main()
	 {
		item i;
		i.accept();
		i.display();
		return 0;
	 }
