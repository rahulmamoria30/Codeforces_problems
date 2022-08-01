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
        if(n%7==0){
           cout<<n<<endl;
       }
       else{
           int rem=n%7;
           int x=7-rem;
           if(n%10>=7){
           cout<<(n-rem)<<endl;
           }
           else if(n%10<=3){
               cout<<(n+x)<<endl;
           }
           
           else{
             int z=n%10;
             if(z>=rem){
             cout<<(n-rem)<<endl;
             }
             else{
             cout<<(n+x)<<endl;
             }
           }
       }
    }
    return 0;
}