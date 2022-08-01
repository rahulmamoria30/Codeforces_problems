#include <bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long int
#define mod 1000000007
bool sum_of_digits(string str){
    ll sum=0;
    for(ll i=0; i<str.length(); i++){
       sum+=(str[i]-'0');
    }
    if(sum%3==0)
    return true;
    return false;
}

int main(){

      ll n;
      cin>>n;
      string str=to_string(n);
      reverse(str.begin(), str.end());
       for(ll i=0; i<n; i++){
           if(sum_of_digits(str) and str[i]!=0)
           {
               reverse(str.begin(), str.end());
               int num=stoi(str);
               cout<<num<<endl;
               break;
           }
           else if(sum_of_digits(str) and str[i]==0){
              int num=stoi(str);
               cout<<num<<endl;
               break;
           }
           else if(!sum_of_digits(str)){
               str.pop_back();
    
           }
           else if(str.length()==0){
               cout<<-1<<endl;
               break;
           }
       }

      
    return 0;
}