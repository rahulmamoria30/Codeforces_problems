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
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    vector<pair<int, int>> p(n);
    for (int i = 0; i < n; i++)
    {
        p[i] = {a[i], b[i]};
    }
    sort(all(a));
    sort(all(b));
    bool f = false;
    vector<pair<int, int>> ans;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (p[j] == make_pair(a[i], b[i]))
            {
                swap(p[i], p[j]);
                if (i != j)
                {
                    ans.push_back({i, j});
                }
                break;
            }
        }
        if (p[i] != make_pair(a[i], b[i]))
        {
            f = true;
        }
    }
    if (f)
    {
        cout << "-1" << endl;
        return;
    }
    cout << ans.size() << endl;
    for (auto it : ans)
    {
        cout << (it.second + 1) << " " << (it.first + 1) << endl;
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