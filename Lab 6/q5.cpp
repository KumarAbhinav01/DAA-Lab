//Write a program to sort a list of numbers using Selection Sort

#include<iostream>
using namespace std;

int main()
{
    int a[100], n, i, j, p, swap;
    cout<<"\nEnter number of elements: ";
    cin>>n;
    cout<<"Enter Numbers: ";
    for (i = 0; i < n; i++)
        cin>>a[i];

    cout<<"\nArray Before Sorting: ";
    for(i = 0; i < n; i++)
        cout<<a[i]<<" ";

    for(i = 0; i < n - 1; i++)
    {
        p=i;
        for(j = i + 1; j < n; j++)
        {
            if(a[p] > a[j])
                p=j;
        }
        
        if(p != i)
        {
            swap=a[i];
            a[i]=a[p];
            a[p]=swap;
        }
    }
    cout<<"\nArray After Sorting: ";
    for(i = 0; i < n; i++)
        cout<<a[i]<<" ";

    cout<<endl<<endl;
    return 0;
}