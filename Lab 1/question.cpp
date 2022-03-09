#include<bits/stdc++.h> 

using namespace std;

int solve (vector<int> arr) { 
    int sum = 0;
    for (int i=0; i<n; sum+=arr[i++]);
    int small = INT_MAX;
    for (int i=0; i<n; i++)
        if (arr[i] < small)
            small = arr[i];
    return small;
}

int main() 
{    
    ios::sync_with_stdio(0); 
    cin.tie(0); 
    int T;
    cin >> T;
    for(int t_i = 0; t_i < T; t_i++) 
    {
        int N; 
        cin >> N; 
        vector<int> arr(N);
        for(int i_arr = 0; i_arr < N;i_arr++)
        {
            cin >> arr[i_arr];
        }
        
        int out;
        out= solve (arr);
        cout << out;
        cout << "\n";
    }
}
