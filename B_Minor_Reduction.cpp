#include <bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long int
#define mod 1000000007
int main(){

      int t;
      cin>>t;
      while(t--){
          string str;
          cin>>str;
        
          int n=str.length();
          bool flag=false;
          for(int i=n-1; i>=1; i--){
               ll c1=str[i]-'0';
               ll c2=str[i-1]-'0';
               ll c=c1+c2;
               if(c>=10){
                 flag=true;
                 str[i-1]=c/10+'0';
                 str[i]=c%10+'0';
                break;
               }
            }
            if(flag){
                cout<<str<<endl;
            }
            else{
                cout<<(str[0]-'0'+str[1]-'0');
                for(int i=2; i<n; i++){
                    cout<<str[i];
                }
                cout<<endl;
            }
 
      }
      
    return 0;
}