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
       int n;
       cin>>n;
       ll arr[n];
       bool f=false;
       for(int i=0; i<n; i++) cin>>arr[i];
       int count=0;
       for(int i=1; i<n-1; i++){
           if(arr[i]%2==0 and arr[i]>0){
             while(arr[i]){
              arr[i-1]=arr[i-1]+1;
              arr[i+1]=arr[i+1]+1;
              arr[i]=arr[i]-2;
              
           }
           count++;
           }
          
           if(arr[i]>1){
               f=true;
           }
       }
       if(f) cout<<-1<<endl;
       else{
           cout<<count<<endl;
       }
   }
    return 0;
}