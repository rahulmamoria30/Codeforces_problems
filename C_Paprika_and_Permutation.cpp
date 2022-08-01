
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long int
#define mod 1000000007
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll arr[n];
        for (ll i = 1; i <= n; i++)
        {
            cin >> arr[n];
        }
        sort(arr, arr + n);
        int ops = 0;
        for (ll i = 1; i <= n; i++)
        {
            if (arr[i] != i)
            {
                ll num=arr[i];
                for (ll k = 2; k < num; k++)
                {
                    if (num % k == i)
                    {
                    //    arr[i]=arr[i]%k;
                        ops++;
                         break;
                    }
                    
                }
            }
        }
        bool f=1;
       if(ops==0){
           for(ll i=1; i<=n; i++){
               if(arr[i]!=i){
                   f=0;
                   break;
               }
           }
       }
       if(!f)
       cout<<-1<<endl;
       else
       cout<<ops<<endl;
    }

    return 0;
}