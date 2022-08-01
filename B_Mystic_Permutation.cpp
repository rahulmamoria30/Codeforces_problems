#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long int
#define mset(arr, val) memset(arr, val, sizeof(arr))
#define loop(i, a, b) for (ll i = a; i < b; ++i)
#define dloop(i, a, b) for (ll i = a; i >= b; --i)
#define all(a) a.begin(), a.end()
#define mod 1000000007
#define pq priority_queue
#define pll pair<ll, ll>
#define ss second
#define ff first
#define pb push_back
#define ppb pop_back
#define umap unordered_map
#define uset unordered_set
#define uset unordered_set
#define ub upper_bound
#define lb lower_bound
#define br "\n"
#define sp " "
#define mn INT_MIN
#define mx INT_MAX
// const int N = 2e5 + 1;

void solve()
{
    ll n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (n == 1)
    {
        cout << -1 << endl;
        return;
    }
    vector<int> temp(all(arr));
    sort(all(temp));
    for (int i = 0; i < n; i++)
    {
        if (i == n - 1 and (arr[i] == temp[i]))
        {
            swap(temp[i - 1], temp[i]);
        }
        else if (arr[i] == temp[i])
        {
            swap(temp[i + 1], temp[i]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << temp[i] << " ";
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}