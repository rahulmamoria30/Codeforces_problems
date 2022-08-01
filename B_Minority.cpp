#include <bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long int
#define mod 1000000007
int main(){
   ll t;
   cin>>t;
   while(t--){
       string s;
       cin>>s;
       ll n=s.length();
       ll one=0;
       ll zero=0;
       ll ans=0;
       for(ll i=0; i<n; i++){
           if(s[i]=='0'){
               zero++;
           }
           else{
               one++;
           }
       }
    //    if(zero==one and one>1){
    //        cout<<(zero-1)<<endl;
    //    }
    //    else if(zero!=one){
    //        ans=min(zero,one);   
    //        cout<<ans<<endl;
    //    }
    //    else{
    //        cout<<ans<<endl;
    //    }
    cout<<min(zero, one)<<endl;
      
       
   }
    return 0;
}