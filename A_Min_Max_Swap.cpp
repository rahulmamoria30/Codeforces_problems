#include <bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long int
#define mod 1000000007
int main(){

      int test;
      cin>>test;
      while(test--){
          int n;
          cin>>n;
          int arr1[n], arr2[n];
          for(int i=0; i<n; i++) cin>>arr1[i];
          for(int i=0; i<n; i++) cin>>arr2[i];
          for(int i=0; i<n; i++){
              if(arr2[i]>arr1[i]){
              int temp=arr2[i];
              arr2[i]=arr1[i];
              arr1[i]=temp;
              }
          }
          sort(arr1, arr1+n);
          sort(arr2, arr2+n);
          cout<<(arr1[n-1]*arr2[n-1])<<endl;
      }

      
    return 0;
}