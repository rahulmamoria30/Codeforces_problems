#include <bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long int
#define mod 1000000007
bool ispal(string str){
    ll i=0, j=str.length()-1;
    while(i<=j){
        if(str[i]!=str[j]){
            return false;
        }
        i++;
         j--;
    }
    return true;
}
int main()
{
   int t;
   cin>>t;
   while(t--){
       int n, k;
       cin>>n>>k;
       string s; cin>>s;
       if(k==0||ispal(s)) cout<<1<<endl;
    //    else if(ispal(s)) cout<<1<<endl;
        else
        cout<<2<<endl;

       
   }
    return 0;
}