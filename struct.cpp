#include<iostream>
using namespace std;
struct emp
{
	int id=101;
	char name[20]="suraj";
	float sal=1200.12;
}e;
int main()
{
	cout<<"id="<<e.id;
	cout<<"name="<<e.name;
	cout<<"sal="<<e.sal;
	return 0;
}
