//Q4. Write a non recursive program to sort the list of 'n' numbers using Quick sort.

#include <iostream>
using namespace std;
 
// Function to swap numbers
void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
 
//This function take all Smaller elements to left and greater elements to right.
int partition(int arr[], int l, int h)
{
    int x = arr[h];
    int i = (l - 1);
 
    for (int j = l; j <= h - 1; j++) {
        if (arr[j] <= x) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[h]);
    return (i + 1);
}
 
void quickSort(int A[], int l, int h)
{
    if (l < h) {
        int p = partition(A, l, h);
        quickSort(A, l, p - 1);
        quickSort(A, p + 1, h);
    }
}
 
// This is the main function
int main()
{
    int n, arr[20];
    cout<<"\nEnter no. of elements to be added: ";
    cin>>n;
    cout<<"Enter elements one by one: ";
    for(int i=0; i<n; i++)
    cin>>arr[i]; 
 
    quickSort(arr, 0, n - 1);
 
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout<<endl;
 
    return 0;
}