/* 
W.A.P. to add two matrices of order "m x n" where values  of 'n' and 'm' 
are entered by the user at run time and the values of Matrix 'A' and Matrix 
B are also entered by the user at run time.
*/

#include <stdio.h>
 
int main()
{
   int r, c, i, j, A[10][10], B[10][10], sum[10][10];
 
   printf("Enter the number of rows of matrix: ");
   scanf("%d", &r);
   printf("Enter the number of columns of matrix: ");
   scanf("%d", &c);
   printf("Enter the elements of first matrix\n");
 
   for (i = 0; i < r; i++)
      for (j = 0; j < c; j++)
         scanf("%d", &A[i][j]);
 
   printf("Enter the elements of second matrix\n");
 
   for (i = 0; i < r; i++)
      for (j = 0 ; j < c; j++)
         scanf("%d", &B[i][j]);
   
   printf("Sum of entered matrices:-\n");
    
   for (i = 0; i < r; i++) {
      for (j = 0 ; j < c; j++) {
         sum[i][j] = A[i][j] + B[i][j];
         printf("%d\t", sum[i][j]);
      }
      printf("\n");
   }
 
   return 0;
}