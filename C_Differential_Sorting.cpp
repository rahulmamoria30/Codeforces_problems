
#include <bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long int
#define mod 1000000007
void solve(){
      ll n;
      cin>>n;
      ll arr[n];
      for(int i=1; i<=n; i++){
          cin>>arr[i];
      }
      vector<vector<ll>>ans;
      int ops=0;
      vector<ll>v;
      if(is_sorted(arr, arr+n)){
         cout<<0<<endl;
         return;
      }
      reverse(arr, arr+n);
       if(is_sorted(arr, arr+n)){
         cout<<-1<<endl;
         return;
      }
      reverse(arr, arr+n);
      for(int i=1; i<=n-1; i++){
          if(arr[i]>arr[i+1]){
              ops++;
              v.push_back(i);
              v.push_back(i+1);
              v.push_back(i+2);
              ans.push_back(v);
              v.clear();
          }
      }
      if(ops){
          cout<<ops<<endl;
          for(int i=0; i<ans.size(); i++){
              for(int j=0; j<3; j++){
                  cout<<ans[i][j]<<" ";
              }
              cout<<endl;
          }
      }
      else{
          cout<<0<<endl;
      }
}
int main()
{
   int t;
   cin>>t;
   while(t--){
     
    solve();
   }
    return 0;
}