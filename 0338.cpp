#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin>> s;
    int len = s.size();
    int k;
    cin>> k;
    int dem = 0;
    for(int i = 0; i < len; i++ )
    {
        set<char> ss;
        for(int j = i; j < len; j++)
        {
            ss.insert(s[j]);
            if(ss.size() == k)
                dem += 1;
            if(ss.size() > k)
                break;
        }
    }
    cout<< dem;
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