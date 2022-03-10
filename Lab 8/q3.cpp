/* WAP to implement Floyd's Algorithm of all pair shortest path.
(No. of vertices = 'n') 
*/

#include<iostream>
using namespace std;

int N=0;

void printMatrix(int matrix[][N]);

void floydAlg(int graph[][N]) 
{
  int matrix[N][N], i, j, k;

  for (i = 0; i < N; i++)
    for (j = 0; j < N; j++)
      matrix[i][j] = graph[i][j];

  for (k = 0; k < N; k++) {
    for (i = 0; i < N; i++) {
      for (j = 0; j < N; j++) {
        if (matrix[i][k] + matrix[k][j] < matrix[i][j])
          matrix[i][j] = matrix[i][k] + matrix[k][j];
      }
    }
  }
  printMatrix(matrix);
}

void printMatrix(int matrix[][]) {
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      if (matrix[i][j] == INF)
        printf("%4s", "INF");
      else
        printf("%4d", matrix[i][j]);
    }
    printf("\n");
  }
}

int main() 
{
    int n,i,j;
    cout<<"Enter no. of vertices: ";
    cin>>n;
    N=n;
    int A[n][n];
    cout<<"Enter the elements: ";
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
        {
            if(i==j)
            {
                A[i][j]=0;
                cout<<"Element A["<<i<<"]["<<j<<"] = 0";
            }
            else
            {
                cout<<"Element A["<<i<<"]["<<j<<"]";
                cin>>A[i][j];
            }
        }
    
    floydAlg(A);
}