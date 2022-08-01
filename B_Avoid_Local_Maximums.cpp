
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
       ll ops=0;
       for(int i=1; i<n-1; i++){
           if(arr[i]>arr[i-1] and arr[i]>arr[i+1]){
               ops++;
               if(i+2<n){
              
                   arr[i+1]=max(arr[i], arr[i+2]);
               }
               else{
                   arr[i+1]=arr[i];
               }
           }
       }
       cout<<ops<<endl;
       for(int i=0; i<n; i++){
           cout<<arr[i]<<" ";
       }
       cout<<endl;
   }
    return 0;
}