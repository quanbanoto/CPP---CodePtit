#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin>> s;
    int len = s.size();
    int tong = 0;
    multiset<char> ss;
    for(int i = 0; i < len; i++)
    {
        if(!isdigit(s[i]))
            ss.insert(s[i]);
        else 
            tong += s[i] - '0';
    }
    for(auto x : ss)
        cout<< x;
    string temp = to_string(tong);
    cout<< temp;
}

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