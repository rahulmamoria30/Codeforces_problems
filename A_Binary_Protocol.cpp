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
       int n; cin>>n;
       string str; cin>>str;
       ll num=0;
       for(int i=0; i<n; i++){
           if(str[i]=='1'){
               num++;
           }
           else{
               num=num*10;
           }
       }
       cout<<num<<endl;
      
    return 0;
}