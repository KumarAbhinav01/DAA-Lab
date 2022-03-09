/* 
2. Write a program to sort the list of n numbers in ascending or descending 
order using the bubble sort method. Here a list of no. will be inserted by 
the user at run time.  A or a for ascending order sorting and D or d for 
descending order sorting.
*/

#include <stdio.h>        

int main()                 
{
	int a[100],n,i,j,temp;
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
	    for (i=0; i<n; i++)
    	{
        	for (j=0; j<(n-i-1); j++)
       		 {
            	if (a[j] > a[j+1])
            	{
                	temp = a[j];
                	a[j] = a[j+1];
                	a[j+1] = temp;
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
	    for (i=0 ; i<(n-1); i++)
		{
            for (j=0 ; j<n-i-1; j++)
			{
                if(a[j] < a[j+1])
				{
                    temp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = temp;
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