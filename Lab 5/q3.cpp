#include<iostream>
using namespace std;
void merge(int a[],int begin,int mid,int end){
    int n=mid-begin+1;
    int m=end-mid;
    int p[n];
    int q[m];
    for(int i=0;i<n;i++)
    p[i]=a[begin+i];
    for(int i=0;i<m;i++)
    q[i]=a[mid+i+1];
    int i=0,j=0;
    int s=begin;
    while(i<n&&j<m){
        if(p[i]<=q[j]){
            a[s]=p[i];
            i++;
        }
        else{
            a[s]=q[j];
            j++;
        }
        s++;
    }
    while(i<n){
        a[s]=p[i];
        i++;
        s++;
    }
    while(j<m){
        a[s]=q[j];
        j++;
        s++;
    }

}
int min(int x,int y){
    return (x<y)?x:y;
}
void mergeSort(int a[],int n){
    int curSize;
    int left;
    for(curSize=1;curSize<=n-1;curSize=curSize*2){
        for(left=0;left<n-1;left+=2*curSize){
            int mid=min(left+curSize-1,n-1);
            int right=min(left + 2*curSize-1,n-1);
            merge(a,left,mid,right);
        }
    }
    
}
void printList(int a[],int n){
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
}
int main(){
    int n;
    cout<<"enter size:";
    cin>>n;
    cout<<"enter list:";
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    mergeSort(a,n);
    printList(a,n);
    return 0;
}