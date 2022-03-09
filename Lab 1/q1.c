/* 
1. Write a programme to sort a list of numbers in ascending order or 
descending order using the selection sort method (here, A or a for ascending 
order sorting and D or d for descending order sorting. No. of elements to be 
sorted should be given by the user at run time. 
*/

#include <stdio.h>        

int main()                 
{
	int a[100],n,i,j;
    char choice;
	printf("Array size: ");
    scanf("%d",&n);
    printf("Elements: ");    
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Sorting to be done in Ascending(A/a) or Descending order(D/d):");
    scanf(" %c", &choice);

    if(choice=='A' || choice =='a')  
    {
	    for (int i = 0; i < n; i++)                 
	    {
		    for (int j = 0; j < n; j++)            
		    {
			    if (a[j] > a[i])             
			    {
					int tmp = a[i];       
				    a[i] = a[j];         
				    a[j] = tmp;            
			    }  
		    }
	    }
    	printf("\nAscending : ");                    
	    for (int i = 0; i < n; i++)                     
	    {
		    printf(" %d ", a[i]);
	    }
    }
    else
    if(choice=='D' || choice =='d') 
    {
	    for (int i = 0; i < n; i++)             
	    {
		    for (int j = 0; j < n; j++)           
		    {
			    if (a[j] < a[i])               
			    {
				    int tmp = a[i];        
				    a[i] = a[j];            
				    a[j] = tmp;             
		    	}
		    }
	    }
	    printf("\nDescending : ");                   
	    for (int i = 0; i < n; i++)                    
	    {
		    printf(" %d ", a[i]);                  
	    }
    }
    else
    printf("Incorrect Option !!");
	return 0;       
}
