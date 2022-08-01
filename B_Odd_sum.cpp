
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long int
#define mod 1000000007
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
  
    int sum1 = 0, sum2=0;
    vector<int>v1,v2;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
            v1.push_back(arr[i]);
        else
            v2.push_back(arr[i]);
    }
   
    for(int i=0; i<v1.size(); i++) sum1+=v1[i];
    for(int i=0; i<v2.size(); i++) sum2+=v2[i];
    if(sum1%2!=0) cout<<sum1<<endl;
    else{
        for(int i=0; i<v2.size(); i++)
         v2[i]=-v2[i];
         int ele;
         sort(v2.begin(), v2.end());
         for(int i=0; i<v2.size(); i++){
             if(v2[i]%2!=0)
           {
               ele=v2[i];
               break;
           }
         }
        
        sum1=sum1-abs(ele);
        cout<<sum1<<endl;
    }

    return 0;
}