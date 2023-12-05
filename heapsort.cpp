#include<iostream>
using namespace std;

void buildheap(int[],int);
void maxheapify(int[],int,int);
void del(int[],int);

int main()
{
	cout<<"\n Student Name - Yash Lade \n";
	cout<<" Entollment - 0832CS221229 \n";
	
	int a[10],i,n;
	
	cout<<"\n Enter the no of element you want to enter in array :";
	cin>>n;
	
	cout<<"\n Enter the element ::\n";
	for(i=1;i<=n;i++)
	cin>>a[i];
	
	cout<<"\n Element before sorting :: \n";
	for(i=1;i<=n;i++)
	cout<<"\n"<<a[i];
	buildheap(a,n);
	del(a,n);
	
	cout<<"\n Element after sorting ::\n";
	for(i=1;i<=n;i++)
	cout<<"\n"<<a[i];
}

void buildheap(int a[],int n)
{
	for(int i=n/2;i>=1;i--)
	maxheapify(a,n,i);
}

void maxheapify(int a[],int n,int i)
{
	int l,r,largest;
	l=2*i;
	r=2*i+1;
	if((l<=n)&&(a[l]>a[i]))
	largest=l;
	else
	largest=i;
	if((r<=n)&&(a[r]>a[largest]))
	largest=r;
	if(a[largest]!=a[i])
	{
		swap(a[i],a[largest]);
		maxheapify(a,n,largest);
	}
}

void del(int a[],int n)
{
	if(n>0)
	{
		swap(a[1],a[n]);
		buildheap(a,n-1);
		del(a,n-1);
	}
}

