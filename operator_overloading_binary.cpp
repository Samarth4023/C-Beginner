#include<iostream>
using namespace std;
class binaryop
{
	int a;
	public:
		
		friend istream & operator>>(istream &input,binaryop &b1)
		{
				cin>>b1.a;
		}
		friend ostream & operator<<(ostream &output,binaryop &b2)
		{
				cout<<b2.a;
		}
		binaryop operator+(binaryop b1)
		{
			binaryop b3;
			b3.a=a+b1.a;
			return b3;
		}
};
int main()
{
	binaryop b1,b2,b3;
	cout<<"Enter 1st no...";
	cin>>b1;
	cout<<"Enter 2nd no...";
	cin>>b2;
	b3=b1+b2;
	cout<<"Addition is : "<<b3;
	return 0;	
}