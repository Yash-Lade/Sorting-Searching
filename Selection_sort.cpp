#include<iostream>
using namespace std;

//Selection Sort 
void sorting(int arr[],int n)
{
	for(int i=0;i<=n-2;i++)
	{
		int min=i;
		for(int j=i;j<=n-1;j++)
		{
			if(arr[j]<arr[min])
			min=j;
		}
		int temp=arr[min];
			arr[min]=arr[i];
			arr[i]=temp;
	}
}

int main()
{
	int n,arr[n],i;
	
	cout<<"Enter the size of array :";
	cin>>n;
	
	cout<<"Enter the elements :";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	cout<<"Elements before sorting are :";
	for(i=0;i<n;i++)
	cout<<" "<<arr[i];
	
	sorting(arr,n);
	
	cout<<"\nElements after sorting are :";
	for(i=0;i<n;i++)
	cout<<" "<<arr[i];
}
