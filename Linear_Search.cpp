 #include<iostream>
using namespace std;
int main()
{
 int n,i,arr[10],no,flag=0,loc;
 
 cout<<"Student Name - Tushar Gawhade \n";
 cout<<"Enroll no. - 0832CS221213 \n";
 
 cout<<"\n -- Linear Search -- \n";
 cout<<"\nEnter the no. of elements you want in array :";
 cin>>n;
 cout<<"Enter the elements :";
 for(i=1;i<=n;i++)
 {
  cin>>arr[i];
    }
    cout<<"\nEnter the element to be searched :";
    cin>>no;
    for(i=1;i<=n;i++)
 {
        if(arr[i]==no)
  {
   flag=1;
   loc=i;
  }
 }
 if(flag==0)
 cout<<"\n"<<no<<"\nNumber not found";
 else
 cout<<"\n"<<no<<"\nNumber found at index no:-"<<loc;
 

}
