#include <bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long int
#define mod 1000000007
ll sumDigits(ll num){
    ll sum=0;
    while(num){
        ll x=num%10;
        sum+=x;
        num=num/10;
    }
    return sum;
}
int main()
{
   ll n, k;
   cin>>n>>k;
   ll cnt=0;
  ll left=1, right=n;
  while(left<=right){
      ll mid=(left+right)/2;
      if((mid-sumDigits(mid))>=k){
          cnt=n-mid+1;
          right=mid-1;
      }
      else{
          left=mid+1;
      }
  }
   cout<<cnt<<endl;
    return 0;
}