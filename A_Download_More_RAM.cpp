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
       int n, k;
       cin>>n>>k;
       int arr[n], brr[n];

       for(int i=0; i<n; i++){
          cin>>arr[i];
       }
       for(int i=0; i<n; i++){
         cin>>brr[i];
       }
       vector<pair<int,int>>v;
       for(int i=0; i<n; i++){
           v.push_back({arr[i], brr[i]});
       }
       sort(v.begin(), v.end());
       for(int i=0; i<n; i++){
           if(k>=v[i].first){
               k+=v[i].second;
           }
           else{
               break;
           }
       }
       cout<<k<<endl;
   }
    return 0;
}