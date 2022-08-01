#include <bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long int
#define mod 1000000007
int main(){

    //   int test;
    //   cin>>test;
    //   while(test--){
          
    //   }
    ll n, k;
    cin>>n>>k;
    ll d=(n/2)/(k+1);
    ll c=d*k;
    ll winner=n-c-d;
    cout<<d<<" "<<c<<" "<<winner;
    
    

      
    return 0;
}