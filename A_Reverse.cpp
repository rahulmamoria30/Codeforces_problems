#include <bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long int
#define mod 1000000007
void reverseArray(vector<int>&v, int i, int j){
    while(i<=j){
        swap(v[i], v[j]);
        i++;
        j--;
    }
    return;
}
int main()
{
   int t;
   cin>>t;
   while(t--){
       int n;
       cin>>n;
       vector<int>arr(n);
       bool flag=true;
       int i,j=0;
       for( i=0; i<n; i++) cin>>arr[i];
       for( i=0;i<n; i++){
           if(arr[i]!=i+1 and flag){
               for(j=i+1; j<n; j++){
                   if(arr[j]==i+1){
                       break;
                   }
               }
               reverseArray(arr, i, j);
               cout<<arr[i]<<" ";
               flag=false;
           }
           else{
               cout<<arr[i]<<" ";
           }
       }
       cout<<endl;
   }
    return 0;
}