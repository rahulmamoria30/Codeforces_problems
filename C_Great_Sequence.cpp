#include <bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long int
#define mod 1000000007
int main(){

      int test;
      cin>>test;
      while(test--){
          ll n, x;
          cin>>n>>x;
          ll arr[n];
          for(ll i=0; i<n; i++){
              cin>>arr[i];
          }
          unordered_map<ll,ll>mp;
          for(ll i=0; i<n; i++){
              mp[arr[i]]++;
          }
          sort(arr, arr+n);
          ll ans=0;
          for(ll i=0; i<n/2; i++){
              ll check=arr[i]*x;
              if(mp.find(check)!=mp.end()){
                ans++;
              }
          }
          cout<<ans<<endl;
      }

      
    return 0;
}