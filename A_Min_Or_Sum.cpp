#include <bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long int
#define mod 1000000007
int main()
{
    int t;
    cin>>t;
    while(t--){
         ll n; cin>>n;
   ll arr[n];
   for(int i=0; i<n; i++){
       cin>>arr[i];
   }
   ll ans=arr[0];
   for(int i=1; i<n; i++){
       ans=ans|arr[i];
   }
    cout<<ans<<endl;
    }
   
        return 0;
}