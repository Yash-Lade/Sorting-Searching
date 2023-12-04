#include<iostream>
using namespace std;

int main()
{
	int a[10],b,i,j,n;

	cout<<"@Author - Yash Lade \n";
	cout<<"Enter the no. of elements :";
	cin>>n;
	
	cout<<"Enter values in array :";
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	
	cout<<"The elements before sorting are :";
	for(i=1;i<=n;i++)
	{
		cout<<a[i];
	}
	
	cout<<"\nArray after sorting :";
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-1;j++)
		{
			if(a[j]>a[j+1])
			swap(a[j],a[j+1]);
		}
	}
    for(i=1;i<=n;i++)
    cout<<a[i];
}
