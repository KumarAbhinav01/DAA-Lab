/* W.A.P. to subtract Matrix & from Matrix A just like question 3.
*/

#include <stdio.h>
 
int main()
{
   int r, c, i, j, A[10][10], B[10][10], diff[10][10];
 
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
   
   printf("Matrix after subtraction:-\n");
    
   for (i = 0; i < r; i++) {
      for (j = 0 ; j < c; j++) {
         diff[i][j] = A[i][j] - B[i][j];
         printf("%d\t", diff[i][j]);
      }
      printf("\n");
   }
 
   return 0;
}