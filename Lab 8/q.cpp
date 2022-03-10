/* WAP to implement Warshall's Algorithm of all pair shortest path.
(No. of vertices = 'n') 
*/

#include<iostream>
using namespace std;

int N=0;

int main() 
{
    int n,i,j,k;
    cout<<"Enter no. of vertices: ";
    cin>>n;
    N=n;
    int A[n][n];
    cout<<"Enter the elements: \n";
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
        {
            cout<<"Element A["<<i<<"]["<<j<<"]: ";
            cin>>A[i][j];
        }
    
    int matrix[N][N];
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            matrix[i][j] = A[i][j];

    for (k = 0; k < N; k++) {
        for (i = 0; i < N; i++) {
            for (j = 0; j < N; j++) {
                if (matrix[i][k] + matrix[k][j] < matrix[i][j])
                    matrix[i][j] = matrix[i][k] + matrix[k][j];
            }
        }
    }
  
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) 
    {
        cout<<matrix[i][j];
    }
    printf("\n");
  }

    return 0;
}