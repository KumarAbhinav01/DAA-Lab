/** 
Write a program to implement Optimal Binary Search Tree for the given 
value of nodes and corresponding weights. Here 'n' represents no. of nodes
in the optimal Binary Search Tree.
**/

#include<bits/stdc++.h>
#include<vector>
using namespace std;

int sum(int w[], int i, int j);

int optimalSearchTree(int nodes[], int w[], int n);

int main()
{   int n;
    
    cout<<"Enter number of nodes:";
    cin>>n;
    int nodes[n];
    int w[n];

    for(int i=0;i<n;i++)
    {
       cout<<"Enter nodes and corresponding weight:";
       cin>>nodes[i];
       cin>>w[i];
    }

    cout << "Cost of Optimal BST is\n"<<optimalSearchTree(nodes, w, n)<<endl;
    return 0;
}

int sum(int w[], int i, int j)
{
    int s = 0;
    for(int k = i; k <= j; k++)
        s += w[k];
    return s;
}

int optimalSearchTree(int nodes[], int w[], int n)
{
    int cost[n+1][n+1];
 
    for (int i = 0; i < n+1; i++)
    {
        for(int j=0; j<n+1; j++)
        {
            if(j-i==1)
                cost[i][j]=w[i];
            else
                cost[i][j] = 0;
        }
    }
  
    for(int l=2;l<n+1;l++)
    {
        for(int i=0;i<n+1;i++)
        {
           int j=i+l;
            if(j<n+1)
            {
                vector<int>v;
                for(int k=i;k<j;k++)
                {
                    v.push_back(cost[i][k]+cost[k+1][j]+sum(w,i,j-1)); 
                }
                cost[i][j]=*min_element(v.begin(), v.end());
            }
        }
    }

    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<n+1;j++)
            cout<<cost[i][j]<<" ";
        cout<<endl;
    }
    
    return cost[0][n];
}