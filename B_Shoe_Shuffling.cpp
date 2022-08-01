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

    vector<pair<int, int>> v(n);
    vector<int> ans(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first;
        v[i].second = i;
        ans[i] = i + 1;
    }
    sort(all(v));
    bool f = 1;
    for (int i = 0; i < n; ++i)
    {
        if (i == 0 && v[i].first != v[i + 1].first)
        {
            f = 0;
            break;
        }
        if (i == n - 1 && v[i].first != v[i - 1].first)
        {
            f = 0;
            break;
        }
        if (i > 0 && i < n - 1 && v[i].first != v[i + 1].first && v[i].first != v[i - 1].first)
        {
            f = 0;
            break;
        }
        if (v[i].first == v[i + 1].first)
        {
            swap(ans[v[i].second], ans[v[i + 1].second]);
        }
    }
    if (!f)
        cout << "-1" << endl;
    else
    {
        for (int i = 0; i < n; ++i)
            cout << ans[i] << ' ';
        cout << endl;
    }
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