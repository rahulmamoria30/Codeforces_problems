#include <bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long int
#define mod 1000000007
int main(){

      ll n;
      cin>>n;
      ll arr[n];
      for(ll i=0; i<n; i++){
          cin>>arr[i];
      }
      vector<ll>color(n, 0);
      ll i=0, j=1, k=2;
      while(k<n){
          if(arr[i]==arr[k] && color[j]==0 and color[i]==0 and color[k]==0) {
              color[j]=1;
          }
              i++;
              j++;
              k++;
          
      }
      
      ll sum=0;
      for(ll p=0; p<n; p++){
          sum+=color[p];
      }
      cout<<sum<<endl;
      
    return 0;
}