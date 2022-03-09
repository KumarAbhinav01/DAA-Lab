//Write a program to multiply two matrices using Strassen's matrix multiplication method

#include<iostream>
using namespace std;

void multiply(int a[10][10], int b[10][10], int r, int c1, int c2)
{
    int c[10][10];
    for(int i=0; i<r; i++)
        for(int j=0; j<c1; j++)
            c[i][j]=0;

    for(int i=0; i<r; i++)
        for(int j=0; j<c1; j++)
            for(int k=0; k<c2; k++)
                c[i][j]+= a[i][k] * b[k][j];
    
    cout<<"\nMatrix after multiplication is: \n";
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c1; j++)
            cout<<c[i][j]<<" ";
            cout<<endl;
    }
    cout<<endl;
}

int main()
{
    int r1,r2,c1,c2;
    int a[10][10],b[10][10];
    cout<<"\nEnter the row for 1st matrix: ";
    cin>>r1;
    cout<<"Enter the column for 1st matrix: ";
    cin>>c1;
    cout<<"Enter the row for 2nd matrix: ";
    cin>>r2;
    cout<<"Enter the column for 2nd matrix: ";
    cin>>c2;

    if(c1!=r2)
    {
        cout<<"Matrix multiplication not possible!\n";
        return 0;
    }

    cout<<"\nEnter elements for 1st matrix: \n";
    for(int i=0;i<r1;i++)
        for(int j=0;j<c1;j++)
            {
                cout<<"Enter element a["<<i<<"]["<<j<<"]: ";
                cin>>a[i][j];
            }

    cout<<"\nEnter elements for 2nd matrix: \n";
    for(int i=0;i<r2;i++)
        for(int j=0;j<c2;j++)
            {
                cout<<"Enter element b["<<i<<"]["<<j<<"]: ";
                cin>>b[i][j];
            }
    
    multiply(a,b,r1,c2,c1);
    return 0;
}

