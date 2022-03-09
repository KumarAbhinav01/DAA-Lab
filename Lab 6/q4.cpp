//Write a program to sort a list of numbers using Insertion Sort

#include<iostream>
using namespace std;

void insertionsort(int a[],int n)
{
    int i,j,temp;
    for(i=0; i<n; i++)
    {
        temp=a[i];
        j=i-1;
        while(j>=0 && temp<=a[j])
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=temp;
    }
}

int main()
{
    int n,a[10];
    cout<<"\nEnter number of elements to Enter: ";
    cin>>n;
    cout<<"Enter the elements one by one: ";
    for(int i=0; i<n; i++)
        cin>>a[i];

    cout<<"\nArray Before Sorting: ";
    for(int i=0; i<n; i++)
        cout<<a[i];

    insertionsort(a,n);
    
    cout<<"\nArray After Sorting: ";
    for(int i=0; i<n; i++)
        cout<<a[i];
    
    cout<<endl<<endl;
    return 0;
}