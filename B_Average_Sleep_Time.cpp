
#include <bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long int
#define mod 1000000007
int main()
{
    
    ll n,k;
    cin>>n>>k;
    ll arr[n];

    for(ll i=0;i<n;i++)
        cin>>arr[i];

    ll sum=0;
    
    for(ll i=0;i<k;i++)
    {
        sum+=arr[i];
    }
     ll index=k;
     double ans=sum;
     
    for(ll i=1;i<n-k+1;i++)
    {
        sum= sum-arr[i-1];
        sum+=arr[index];

        index++;
        ans+=sum;
    }

    double res=ans/(n-k+1);
    cout<<res<<endl;

    return 0;
}