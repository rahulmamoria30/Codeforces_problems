#include <bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long int
#define mod 1000000007
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll arr[n];
        bool flag=false;
        for(int i=0; i<n; i++) cin>>arr[i];
        for(int i=0; i<n-1; i++){
            if(arr[i]>arr[i+1])
            flag=true;
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
   
    return 0;
}