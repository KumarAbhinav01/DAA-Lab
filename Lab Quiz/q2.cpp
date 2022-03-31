#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of square matrix: ";
    cin >> n;
    int A[n][n], i, j, B[n][n];
    cout << "Enter the elements of the matrix\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Enter the value of A[" << i << "][" << j << "]: ";
            cin >> A[i][j];
            B[i][j] = A[i][j];
        }
    }

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || j == 0 || i == (n - 1) || j == (n - 1) || i == j || (i + j + 1) == n)
                B[i][j] = 0;
        }

    cout << "Matrix B[] is:\n";
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}