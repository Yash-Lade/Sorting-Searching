#include<iostream>
using namespace std;

int main()
{
    int n, i, j;
    
    cout<<"Student Name - Yash Lade \n";
    cout<<"Enroll no. - 0832CS221229 \n";
    
    cout<<"\n-- Insertion Sort -- \n";
    
    cout << "\nEnter the size of array :";
    cin >> n;

    int a[n];  // Declare array after getting the size

    cout << "Enter the elements in array :";
    for (i = 0; i < n; i++)
        cin >> a[i];

    cout << "The elements before sorting : ";
    for (i = 0; i < n; i++)
        cout << a[i] << " ";

    for (i = 1; i < n; i++) // Start from the second element cuz first is already sorted !!
    {
        int temp = a[i];
        j = i - 1;

        while (j >= 0 && a[j] > temp)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp;
    }

    cout << "\nThe elements after sorting : ";
    for (i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}

