/* 
Write a program to sort list of n numbers using insertion sort. 
Here value of n will be entered by the user at run time. If n=5 then 5 elements will 
be entered by the user at run time and all these elements will be sorted using insertion sort.
Also find the total number of comparisons. 
*/

#include <math.h>
#include <stdio.h>

int insertionSort(int arr[], int n)
{
    int i, k, j, c=0;
    for (i = 1; i < n; i++) 
    {
        k = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > k) {
            arr[j + 1] = arr[j];
            j = j - 1;
            c++; 
        }
        arr[j + 1] = k;
        c++;
    }
    return(c);
}

int main()
{
    int arr[10], n, count=0;
    printf("\nEnter the number of elements to be entered: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
    scanf("%d", &arr[i]);
    
    count = insertionSort(arr, n);

    printf("\nSorted array in ascending order:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    printf("Total no. of Comparisons: %d\n", count);
    return 0;
}
