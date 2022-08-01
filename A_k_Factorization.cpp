
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long int
#define mod 1000000007
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> fac;

    for (int i = 2; i <= n; i++)
    {
        while (n % i == 0)
        {
            fac.push_back(i);
            n /= i;
        }
    }
    if (k > fac.size())
        cout << -1 << endl;
    else
    {
        for (int i = 0; i < k - 1; i++)
            cout << fac[i] << " ";
        int ans = 1;
        for (int i = k - 1; i < fac.size(); i++)
            ans *= fac[i];
        cout << ans << endl;
    }

    return 0;
}