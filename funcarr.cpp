#include<iostream>
using namespace std;
void array(int n,int arr[])
{
		cout<<"\nArray Elements are....";
	for(int  i=0;i<n;i++)
	{
		cout<<"\t"<<
		[i];	
	}
}
int main()
{
	int n,arr[10];
	cout<<"\nEnter the array size:";
	cin>>n;
	cout<<"\nEnter the array Elements:";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	array(n,arr);
	return 0;
}