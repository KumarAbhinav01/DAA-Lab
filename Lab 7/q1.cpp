//Q1. Write a recursive program to compute nCr.

#include <iostream>
using namespace std;

//Recursive function to calculate the value of nCr
int nCr(int n, int r)
{
    int ncr = 0;
    if (r == 0) {
        return 1;
    }
    else {
        ncr = nCr(n, r - 1) * (n - r + 1) / r;
    }
    return ncr;
}

//This is the main function 
int main()
{
    int n,r;
    cout<<"\nEnter Value of n: ";
  	cin>>n;
    cout<<"Enter Value of r: ";
  	cin>>r;
    cout<<"The Value of nCr: "<<nCr(n, r)<<endl;   // Function Call
    return 0;
}
