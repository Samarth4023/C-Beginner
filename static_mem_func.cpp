#include<iostream>
using namespace std;
class static_data
{
	public:
	static void static_datam()
		{
			cout<<"I am in class...";
		}
};
int main()
{
	static_data::static_datam();
	return 0;
}