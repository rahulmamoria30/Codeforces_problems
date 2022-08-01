
#include <bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long int
#define mod 1000000007
int main()
{
   int n;
   cin>>n; 
   ll arr[n], brr[n];
   for(int i=0; i<n; i++){
       cin>>arr[i];
       brr[i]=arr[i];
   }
   sort(arr, arr+n);
   int minp=arr[0]*arr[1]*arr[2];
   
    
   
    return 0;
}