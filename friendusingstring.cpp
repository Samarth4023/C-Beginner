#include<iostream>
#include<string.h>
using namespace std;
class frnds
{
	char str1[10];
	char str2[12];
	public:
		void get()
		{
			cout<<"Enter the value of a : ";
			cin>>str1;
			cout<<"Enter the value of b : ";
			cin>>str2;
		}
		friend string add(frnds);
};		
string add(frnds g1)
{

	return strcat(g1.str1,g1.str2);
}
int main()
{
	frnds g1;
	g1.get();
	cout<<add(g1);
	return 0;
}

