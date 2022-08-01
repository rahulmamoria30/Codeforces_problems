#include <bits/stdc++.h>
#include<iostream>
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
    int n, m;
    cin>>n>>m;
    vector<string>str(n);
    for(int i=0; i<n; i++){
       cin>>str[i];
    }
    int ft=-1, sd=INT_MAX;
   for(int i=0; i<n; i++){
       for(int j=0; j<m; j++){
           if(str[i][j]=='R' and ft==-1){
               ft=j;
           }
           if(str[i][j]=='R'){
               sd=min(sd, j);
           }
       }
   }
   if(ft<=sd){
       cout<<"YES"<<endl;
   }
   else{
       cout<<"NO"<<endl;
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