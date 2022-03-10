// WAP to implement Knapsack bag problem using Dynamic Programing

#include<iostream>
using namespace std;

int max(int x, int y)
{
    return (x > y) ? x :y;
}

int main()
{
    int n,N,i,wt;
    cout<<"Enter no. of items: ";
    cin>>n;
    cout<<"Enter the Bag Capacity: ";
    cin>>N;
    int v[n],w[n];
    for(int i=0; i<n; i++)
    {
        cout<<"Enter value of item "<<i+1<<": ";
        cin>>v[i];
        cout<<"Enter weight of item "<<i+1<<": ";
        cin>>w[i];
    }
    
    int K[n+1][N+1];
    for(i=0; i<=n; i++)
        for(wt=0; wt<=N; wt++)
        {
            if(i==0 || wt==0)
                K[i][wt] = 0;
            else if(w[i-1] <= wt)
                K[i][wt] = max(v[i-1]+K[i-1][wt-w[i-1]], K[i-1][wt]);
            else 
                K[i][wt] = K[i-1][wt];
        }

    cout<<"Max profit: "<<K[n][N]<<endl;
   
    return 0;
}
