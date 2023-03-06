#include<bits/stdc++.h>
using namespace std;

int solve(string s, int k)
{
    int dem = 0;
    int len = s.length();
    for(int i = 0; i < len; i++)
    {
        int so = 0;
        for(int j = i; j < len; j++)
        {
            so = (so * 10 + s[j] - '0') % k;
            if(so == 0)
                dem ++;
        }
    }
    return dem;
}

int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        string s;
        cin>> s;
        cout<< solve(s, 8) - solve(s, 24)<< endl;
    }
    return 0;
}