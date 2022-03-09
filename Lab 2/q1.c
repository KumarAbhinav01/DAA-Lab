/* Write a program to implement lower triangle square matrix. 
Here size of square matrix will be entered by the user at run time.
*/

#include<stdio.h>
int main() {
   int size, r, c, matrix[10][10];
   printf("Please enter the size of matrix: ");
   scanf("%d", &size);
   printf("\nThe Lower Triangular Matrix is: ");
   for(r = 0; r < size; r++){
      printf("\n");
      for(c = 0; c < size; c++){
      if(r >= c){
         printf("1 ");
      }
      else{
         printf("0 ");
      }
   }
   }
   printf("\n");
   return 0;
}
