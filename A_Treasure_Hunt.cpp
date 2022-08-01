#include <bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long int
#define mod 1000000007

int main()
{
   int x1,y1, x2, y2 , x, y;
   cin>>x1>>y1>>x2>>y2;
   cin>>x>>y;
    
  int dx=abs(x1-x2);
  int dy= abs(y1-y2);
  if(dx%x==0 and dy%y==0){
    if((dx/x)%2==(dy/y)%2){
         cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

  }
  
  else{
      cout<<"NO"<<endl;
  }
   
    return 0;
}