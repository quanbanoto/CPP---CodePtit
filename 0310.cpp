#include<bits/stdc++.h>
using namespace std;
#define ll long long


ll to_Number(string s)
{
    ll x = 0;
    int len = s.size();
    for(int i = 0; i < len; i++)
        x = x * 10 + (int)(s[i] - '0');
    return x;
}

ll maxNumber(string a)
{
    string s = a;
    int len = s.size();
    for(int i = 0; i < len; i++)
    {
    if(s[i] == '5')
        s[i] = '6';
    }
    return to_Number(s);
}
ll minNumber(string a)
{
    string s = a;
    int len = s.size();
    for(int i = 0; i < len; i++)
    {
    if(s[i] == '6')
        s[i] = '5';
    }
    return to_Number(s);
}
// 66655555
void solve()
{
    string x, y;
    cin>> x>> y;
    cout<< minNumber(x) + minNumber(y)<< ' '<< maxNumber(x) + maxNumber(y);
}
//6456 
//5466
//6465
int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        solve();
        cout<< endl;
    }
    return 0;
}