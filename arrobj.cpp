#include<iostream>
using namespace std;
class co2
{
	public:
		char name[20];
		int roll_no;
		void get()
		{
			cout<<"\n Enter name : ";
			cin>>name;
			cout<<"\n Enter rol_no : ";
			cin>>roll_no;
		}
		void put()
		{
			cout<<"\n Name : "<<name;
			cout<<"\nRoll_no : "<<roll_no;
		}
};
int main()
{
	int n;
	cout<<"Enter array size : ";
	cin>>n;
	co2 c[n];
	
	
	for(int i=0;i<n;i++)
	{
		c[i].get();
	}

	for(int j=0;j<n;j++)
	{
		c[j].put();
	}
	return 0;
}