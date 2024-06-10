#include<iostream>
using namespace std;
class static_data
{
	public:
		static int i;
		static_data()
		{
			i=20;
		}
};
int static_data::i=10;
int main()
{
	static_data d1;
	cout<<d1.i;
	return 0;
}