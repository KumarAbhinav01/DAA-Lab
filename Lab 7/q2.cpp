//Q2. Write a non-recursive program to compute nCr where 'n' & 'r' are positive integers

#include<iostream>
using namespace std;

int fun(int n){
   int temp = 1;
   for (int i = 2; i <= n; i++)
      temp = temp * i;
   return temp;
}

// This is a function to calculate nCr
int nCr(int n, int r)
{
   return fun(n) / (fun(r) * fun(n - r));
}

// Here is main function
int main()
{
    int n,r;
    cout<<"\nEnter the value of n: ";
    cin>>n;
    cout<<"Enter the value of c: ";
    cin>>r;
    cout<<"The value of nCr is: "<<nCr(n,r)<<endl;  //Function Call

    return 0;
}

