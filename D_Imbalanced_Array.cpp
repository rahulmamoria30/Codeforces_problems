#include <bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long int
#define mod 1000000007
int main(){

    //   int test;
    //   cin>>test;
    //   while(test--){
          
    //   }
     ll n; cin>>n;
     ll arr[n];
     for(ll i=0; i<n; i++) cin>>arr[i];
     sort(arr, arr+n);
     ll sum=0;
    //  for(ll i=0; i<n; i++) cin>>arr[i];
     for(ll i=0; i<n; i++){
         for(ll j=i; j<n; j++){
             sort(arr+i, arr+j);
          sum+=abs(arr[j]-arr[i]);
         }
     }
     cout<<sum<<endl;
      
    return 0;
}