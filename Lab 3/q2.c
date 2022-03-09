/* Write a program to construct a upper triangular matrix for a 
square matrix using the right diagonal.
*/

#include<stdio.h>
int main() {
   int size, i, j, matrix[10][10];
   printf("Please enter the size of matrix: ");
   scanf("%d", &size);
   printf("\nThe Upper Triangular Right Diagonal Matrix is: ");
   for(i = 0; i < size; i++){
      printf("\n");
      for(j = 0; j < size; j++){
        if(i+j <= size-1)
             printf("1 ");
        else
            printf("0 ");         
      }
   }
   printf("\n");
   return 0;
}
