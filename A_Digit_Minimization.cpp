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
    ll n; cin>>n;
    vector<ll>arr;
    while(n){
        arr.push_back(n%10);
        n=n/10;
    }
    reverse(all(arr));

    if(arr.size()==2){
        // 
        cout<<arr[1]<<endl;
        return ;
    }
    ll mini;
    if(arr.size()==3){
         mini=*min_element(all(arr));
        cout<<mini<<endl;
        return;
    }
     mini=*min_element(all(arr));
    swap(mini, arr[1]);
    
    while(arr.size()!=3){
        arr.pop_back();
          swap(arr[2], arr[arr.size()-1]);
    }
     mini=*min_element(all(arr));
        cout<<mini<<endl;
      
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