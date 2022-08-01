
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

    int temp;
    int n, q;
    cin >> n >> q;
    ll ans = 0;

    vector<int> arr(n + 1);
    vector<bool> cnn(n + 1);
    vector<int> mpp;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        cnn[i] = 0;
        ans += arr[i];
    }
    temp = 0;
    while (q--)

    {
        int ss, q, x;
        cin >> ss;
        if (ss == 1)

        {
            cin >> q >> x;
            if (cnn[q])
            {
                ans -= arr[q];
                ans += x;
                arr[q] = x;
            }
            else

            {
                cnn[q] = 1;
                if (temp == 0)
                    ans -= arr[q];
                else
                    ans -= temp;

                ans += x;
                arr[q] = x;
                mpp.push_back(q);
            }
        }
        else

        {
            cin >> x;
            for (int i = 0; i < mpp.size(); i++)

            {
                cnn[mpp[i]] = 0;
            }
            mpp.clear();
            temp = x;
            ans = (ll)x * n;
        }
        cout << ans << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}