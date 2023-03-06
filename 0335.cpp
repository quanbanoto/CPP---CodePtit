#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin>> s;
    int MAX = 0;
    int len = s.size();
    for(int i = 0; i < len; i++)
    {
        int so = 0;
        while(isdigit(s[i]))
        {
            so = so * 10 + (s[i] - '0');
            i++;
        }
        MAX= max(MAX , so); 
    }
    cout<< MAX;
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