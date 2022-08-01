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
ll minPathSum(vector<vector<int>> &grid)
{
    ll n = grid.size();
    ll m = grid[0].size();
    vector<vector<ll>> dp(n, vector<ll>(m, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == 0 and j == 0)
                dp[i][j] = grid[0][0];

            else
            {
                int up = grid[i][j];
                if (i > 0)
                    up += dp[i - 1][j];
                else
                    up += 1e9;
                int left = grid[i][j];
                if (j > 0)
                    left += dp[i][j - 1];
                else
                    left += 1e9;

                dp[i][j] = min(left, up);
            }
        }
    }
    return dp[n - 1][m - 1];
}
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> mat(n, vector<int>(m));
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            mat[i - 1][j - 1] = (i - 1) * m + j;
        }
    }

    ll ans = minPathSum(mat);
    cout << ans << endl;
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