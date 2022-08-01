#include <bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long int
#define mod 1000000007
int main()
{
   ll t;
   cin>>t;
   while(t--){
      ll n;
      cin>>n;
      ll arr[n];
      for(ll i=0; i<n; i++){
         cin>>arr[i];
      }

      unordered_set<ll>st;
      for(ll i=0; i<n; i++){
         st.insert(arr[i]);
      }
      ll size=st.size();
      for(ll i=0; i<n; i++){
          if(i<size){
              cout<<size<<" ";
          }
          else{
              cout<<i+1<<" ";
          }
      }
      cout<<endl;
   }
    return 0;
}