/* WAP to implement Floyd's Algorithm of all pair shortest path.
(No. of vertices = 'n') 
*/

#include<stdio.h>
#include<iostream>
using namespace std;

int N=0;

void add(int arr[][N],int src, int dest,int value)
{
     arr[src][dest] = value;
}

int main()
{
    int n,i,k,j;
    cout<<"Enter no. of vertices: ";
    cin>>n;
    N=n;
    int a[N][N];
    for(i = 0; i < N; i++)
        for(j = 0; j < N; j++)
            a[i][j] = 0;

    cout<<"Enter the elements: \n";
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
        {
            cout<<"Element A["<<i<<"]["<<j<<"]: ";
            cin>>a[i][j];
        }
 
    //floydWarshall(a);
    int matrix[N][N];

  for (i = 0; i < N; i++)
    for (j = 0; j < N; j++)
      matrix[i][j] = a[i][j];

  int fr=0,fc=0;
  while(fr<N){
  for(int i=0;i<N;i++){
      for(int j=0;j<N;j++){
          if(i!=fr&&j!=fc){
          if((matrix[fr][j]*matrix[i][fc]>0)&&(i!=j)){
              if(matrix[i][j]==0){
                  matrix[i][j]=matrix[fr][j]+matrix[i][fc];
              }
              else{
                  matrix[i][j]=min( matrix[i][j],matrix[fr][j]+matrix[i][fc]);
              }
          }
          }
      }
  }fr++;fc++;
  
    for(i = 0; i < N; i++)
         for(j = 0; j < N; j++)
             cout<<a[i][j];
         cout<<"\n";
    cout<<endl;

    return 0;
}
}