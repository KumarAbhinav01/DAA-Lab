/* Write a program to implement upper triangle square matrix. 
Here size of square matrix will be entered by the user at run time.
*/

#include<stdio.h>
int main() {
   int size, r, c, matrix[10][10];
   printf("Please enter the size of matrix: ");
   scanf("%d", &size);
   printf("\nThe Upper Triangular Matrix is: ");
   for(r = 0; r < size; r++){
      printf("\n");
      for(c = 0; c < size; c++){
      if(r > c){
         printf("0 ");
      }
      else{
         printf("1 ");
      }
   }
   }
   printf("\n");
   return 0;
}
