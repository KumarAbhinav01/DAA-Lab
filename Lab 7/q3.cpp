//Q3. Write a recursive program to sort the list of 'n' numbers using Quick Sort

#include <iostream>
using namespace std;
 
void swap(int *a,int *b)
{
    int temp = *a;
    *a=*b;
    *b = temp;
}

int partition (int A[], int p, int r)
{
    int x = A[r];
    int i = p - 1;
 
    for (int j = p; j <= r- 1; j++)
    {
        if (A[j] <= x)
        {
            i++;
            swap (&A[i], &A[j]);
        }
    }
    swap (&A[i + 1], &A[r]);
    return (i + 1);
}
 
void quickSort(int A[], int p, int r)
{
    if (p < r)
    {
        int q = partition(A, p,r);
        quickSort(A, p, q - 1);
        quickSort(A, q + 1, r);
    }
}
int main()
{
    int n,a[10];
    cout<<"\nEnter no. of elements to be added: ";
    cin>>n;
    cout<<"Enter elements one by one: ";
    for(int i=0; i<n; i++)
    cin>>a[i]; 
    
    quickSort(a,0,n-1);
   
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    
    cout<<endl;
    return 0;
}
