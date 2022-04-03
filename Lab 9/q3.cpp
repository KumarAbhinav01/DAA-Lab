// Solve job sequencing with deadline problem.

#include<bits/stdc++.h>
using namespace std;

void swap(int *a,int i,int j)
{
    int temp=a[i];
    a[i]=a[j];
    a[j]=temp;
}

void bubbleSort(int *jno,int *fine,int *deadline,int n)
{
    int i,j;

    for(i=0; i<=n-1; i++)
        for(j=0; j<=n-1-i; j++)
            if(fine[j]<fine[j+1])
            {
                swap(fine,j,j+1);
                swap(deadline,j,j+1);
                swap(jno,j,j+1);
            }    
}

int main()
{
    int deadline[50],fine[50],jno[50],n,i;

    cout<<"Enter number of jobs: ";
    cin>>n;

    for(i=0;i<n;i++)
    {
        cout<<"\nJob No "<<i+1<<endl;
        jno[i]=i+1;
        cout<<"Deadline: ";
        cin>>deadline[i];
        cout<<"Fine: ";
        cin>>fine[i];
    }    

    bubbleSort(jno,fine,deadline,n);

    cout<<"\nJob Sequence Should be:\n";
    cout<<"Job No.\ttime\tfine\n";
    for(i=0;i<n;i++)
        cout<<jno[i+1]<<"\t"<<deadline[i+1]<<"\t"<<fine[i+1]<<endl;

    return 0;
}