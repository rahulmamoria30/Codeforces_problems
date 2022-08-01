#include <bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long int
#define mod 1000000007
int main(){

      ll n;
      cin>>n;
      ll arr[n];
      for(ll i=0; i<n; i++) 
        cin>>arr[i];
      int diff =INT_MAX;
      sort(arr, arr+n);
      unordered_map<int,int>m;
      for(ll i=1; i<n; i++){
          int x=abs(arr[i]-arr[i-1]);
          diff= min(x, diff);
          m[x]++;
      }
      cout<<diff<<" "<<m[diff]<<endl;

      
    return 0;
}