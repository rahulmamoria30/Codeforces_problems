
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long int
#define mod 1000000007
int main()
{

    ll n;
    cin >> n;
    string str = to_string(n);
    string temp = str;
    int size = str.length();
    if (n <= 9)
    {
        cout << 1 << endl;
    }
    else
    {
        temp[0]=temp[0]+1;
        for (int i = 1; i < size; i++)
        {
            temp[i] = '0';
        }
       
        int num=0;
        for(int i=0; i<temp.length(); i++){
          num=num*10+temp[i]-'0';
        }
        // ll num2=stoi(temp);
        cout<<(num-n)<<endl;
    }

    return 0;
}