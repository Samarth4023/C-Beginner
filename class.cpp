#include<iostream>
using namespace std;
class emp
{
	public:
	int id=101;
	char name[20]="chetan";
	float sal=1320.12;
void display()
{
	cout<<"id="<<id;
	cout<<"name="<<name;
	cout<<"sal="<<sal;
}
}e;
int main()
{
	e.display();
	return 0;
}
