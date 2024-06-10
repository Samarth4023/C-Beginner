#include<iostream>
using namespace std;
int main()
{
	int arr[10][10],n;
	cout<<"\nEnter the array size:";
	cin>>n;
	cout<<"\nEnter the array Elements:";
	for(int i=0;i<n;i++)
	{
	for(int j=0;j<n;j++)
	{
		cin>>arr[i][j];
	}
	}
	cout<<"\nArray Elements are....";
	for(int  i=0;i<n;i++)
	{
	for(int j=0;j<n;j++)
	{
		cout<<"\t"<<arr[i][j];
	}
	}
	return 0;
}