#include<iostream>
using namespace std;

int main()
{
	int i,n,data;
	
	cout<<"Enter the size of array :";
	cin>>n;
	
	int a[n];
	
	cout<<"Enter the elements in array : ";
	for(i=0;i<n;i++)
	cin>>a[i];
	
	cout<<"Enter the element to be searched :";
	cin>>data;
	
	for(i=0;i<n;i++)
	{
		if(a[i]==data)
		{
			cout<<"The element is found on the index : "<<i;
			break;
		}
	}
	if(i==n)
	cout<<"Element is not in array therefore not found !!";
}
