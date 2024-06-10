#include<iostream>
using namespace std;
int main()
{
	int arr[100],n;
	cout<<"\nEnter the array size:";
	cin>>n;
	cout<<"\nEnter the array Elements:\n";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"\nArray Elements are....";
	for(int  i=0;i<n;i++)
	{
		if(arr[i]>0)
		{
			if(arr[i]<0)
			{
				break;
			}
			cout<<"\t"<<arr[i];
			
		}	
	}
	return 0;
}