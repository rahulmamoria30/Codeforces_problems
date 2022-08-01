#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long int
#define mod 1000000007
int main()
{

    //   int test;
    //   cin>>test;
    //   while(test--){

    //   }
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int m;
    cin >> m;
    int matrix[m][2];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> matrix[i][j];
        }
    }
    // unordered_set<int> st;
    int ans = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    // for (int i = 0; i < n; i++)
    //     st.insert(arr[i]);
    // int check=0;
    // int end=0;
    // for (int i = 0; i < m; i++)
    // {
        
    //         // int start = matrix[i][0];
    //         // end = matrix[i][1];
    //         // // int interval = end - start + 1;
    //         // // if (st.find(interval) != st.end())
    //         // // {
                
    //         // // }
    //         // if(sum>=start and sum<=end){
    //         //    check=1;
    //         //     // sum=sum;
    //         // }
    //         // else if(sum<=start and check==0){
    //         //     check=2;
    //         //     sum=start;
    //         // }
        
    // }
    int end=matrix[m-1][1];
    if (sum <=end)
    {
        cout << sum << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}