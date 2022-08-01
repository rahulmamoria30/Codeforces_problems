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
          int arr[n];
          for(int i=0; i<n; i++) cin>>arr[i];
          int ops=0;
         int last=arr[n-1];
         for(int i=n-1; i>=0; i--){
                  if(arr[i]!=last){
                      ops++;
                    //   arr[i]=last
                      i=n-(n-1-i)*2;
                  }
              }
          
          cout<<ops<<endl;
      }

      
    return 0;
}