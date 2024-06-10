#include<iostream>
using namespace std;
class item
{
	public:
		void accept(int A,int B);
		void display();
};
	 void item::accept(int A,int B)
	 {
	    A=7;
	    B=8;
	 }
	 void item::display()
	 {
	    cout<<"\n A="<<7<<endl;
	    cout<<"\n B="<<8<<endl;
	 }
	 int main()
	 {
		int A,B;
		item i;
		i.accept(A,B);
		i.display();
		return 0;
	 }
