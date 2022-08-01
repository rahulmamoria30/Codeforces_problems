#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long int
#define mod 1000000007
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll arr[n];
        ll ans = 0;
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        for (int i = 0; i < n; i++)
        {
            ll zero = 0, temp = 0;
            for (int j = i; j < n; j++)
            {
                if (arr[j] == 0)
                    zero++;
                temp += (j - i + 1);
                temp += zero;
            }
            ans += temp;
        }
        cout << ans << endl;
    }
    return 0;
}