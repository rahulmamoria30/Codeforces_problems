
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long int
#define mod 1000000007
int main()
{

    int n, k;
    cin >> n >> k;
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = 0;
        }
    }
   
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] > 0)
                continue;
            else if (k >= 2 and i != j)
            {
                arr[i][j] = arr[j][i] = 1;
                k -= 2;
            }
            else if (i == j and k > 0)
            {
                arr[i][j] = 1;
                k--;
            }
        }
    }
    
    if (k==0)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}