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

ll calcu(string s)
{
    ll n = s.size();
    ll ans = 0;
    for (ll i = 1; i < n - 1; i++)
        ans += 11 * (s[i] - '0');
    ans += 10 * (s[0] - '0');
    ans += s[n - 1] - '0';

    return ans;
}
void solve()
{
    ll n, k;
    cin >> n >> k;
    ll first = -1;
    ll sec = -1;
    ll a = 0;
    ll b = 0;
    string s;
    cin >> s;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            if (first == -1)
                first = i;
            sec = i;
        }
    }

    a = first;
    b = -1 + n - sec;

    if (first == -1 && sec == -1)
    {
    }
    else if (first == -1)
    {
        if (k >= b)

            swap(s[n - 1], s[sec]);
    }
    else if (sec == -1)
    {
        if (k >= a)

            swap(s[0], s[first]);
    }
    else if (sec == first)
    {
        if (b <= k)

            swap(s[n - 1], s[sec]);

        else if (a <= k)
        {
            swap(s[0], s[first]);
        }
    }
    else
    {
        if (a + b > k)
        {
            if (b <= k)

                swap(s[n - 1], s[sec]);

            else if (a <= k)

                swap(s[0], s[first]);
        }
        else if (a + b <= k)
        {
            swap(s[0], s[first]);
            swap(s[n - 1], s[sec]);
        }
    }

    cout << calcu(s) << endl;
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