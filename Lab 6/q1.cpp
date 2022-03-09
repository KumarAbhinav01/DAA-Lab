//Write a non recursive program to complete x^n where x is float and n is integer

#include<iostream>
using namespace std;
int main()
{
    int n;
    float x, ans=1;
    cout<<"Enter the value of x: ";
    cin>>x;
    cout<<"Enter the value of n: ";
    cin>>n;

    bool flag=false;
    if(n<0)
    {
        flag=true;
        n = n * -1;
    }
    
    for(int i=1; i<=n; i++)
        ans = ans * x;
    
    if(flag==true)
        ans = 1/ans;
    
    cout<<x<<" Power "<<n<<" is "<<ans<<endl;
    
    return 0;
    
}