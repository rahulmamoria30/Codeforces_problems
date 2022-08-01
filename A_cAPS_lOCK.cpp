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
bool check(string s){
    for(int i; i<s.length(); i++){
      if(isupper(s[i])==false)
       return false;
    }
    return true;
}
void solve()
{
  string str; cin>>str;
  int n=str.length();
  int i;
  for(i=1; i<n; i++){
      if(islower(str[i])) break;
  }
  if(i==n){
      for(int i=0; i<n; i++){
          if(isupper(str[i]))
          str[i]=tolower(str[i]);
          else
          str[i]=toupper(str[i]);
      }
  }
  cout<<str<<endl;
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