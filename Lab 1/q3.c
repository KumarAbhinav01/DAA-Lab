/* 
3. Write a program to generate an array of elements where left diagonal and 
right diagonal elements of the array will be non zero and other elements will 
be zero.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, m, n;
    int matrix[10][20];

    printf("Enter number of rows : ");
    scanf("%d", &m);
    printf("Enter number of columns : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) 
        {
            if (i == j || (i + j + 1) == n)
            matrix[i][j] = rand() % 10+1;
            else
            matrix[i][j] = 0;
        }
    }

    printf("\nThe resultant matrix is: \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}