
#include <bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long int
#define mod 1000000007
int main(){

      ll n;
      cin>>n;
      ll arr[n];
      for(int i=0; i<n; i++) cin>>arr[i];
      int left[n], right[n];
      for(int i=0; i<n; i++){
          left[i]=INT_MAX;
          right[i]=INT_MAX;
      }
      int index=0;
      for(int i=0; i<n; i++){
       if(arr[i]==0){
           while(index!=i){
               right[index]=i-index;
               index++;
           }
       }
      }
      index=n-1;
      for(int i=n-1; i>=0; i--){
          if(arr[i]==0){
              while(index!=i){
                  left[index]=index-i;
                  index--;
              }
          }
      }
      for(int i=0; i<n; i++){
          if(arr[i]==0){
              cout<<arr[i]<<" ";
          }
          else{
               cout<<min(left[i], right[i])<<" ";
      }
          }
         
      
    return 0;
}