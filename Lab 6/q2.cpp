//Write a recursive program to complete x^n where x is float and n is integer

#include<iostream>
using namespace std;

int Power(float x, int n)
{
    bool flag=false;
    if(n<0)
    {
        flag=true;
        n = n * -1;
    }

    if(n != 0)
       return(x * Power(x,n-1));
    
    else
        return 1;
}

int main()
{
    float x;
    int n, ans;
    cout<<"Enter the value of x: ";
    cin>>x;
    cout<<"Enter the value of n: ";
    cin>>n;
    ans=Power(x,n);
    cout<<x<<" Power "<<n<<" is "<<ans<<endl;
}