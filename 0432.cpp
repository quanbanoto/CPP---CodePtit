#include<bits/stdc++.h>
using namespace std;

bool cmp(string a, string b)
{
    return a + b > b + a;
}

int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int n; 
        cin>> n;
        vector<string> v;
        for(int i = 0; i < n; i++)
        {
            string a;
            cin>> a;
            v.push_back(a);
        }
        sort(v.begin(), v.end(), cmp);
        for(auto x : v)
            cout<< x;
        cout<< endl;
    }
    return 0;
}