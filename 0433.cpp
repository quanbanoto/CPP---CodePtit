#include<bits/stdc++.h>
using namespace std;
map<int, int> mp;
bool cmp(int a, int b)
{
    if(mp[a] != mp[b])
        return mp[a] > mp[b];
    else 
        return a < b;
}

void testCase()
{
    int n;
    cin>> n;
    mp.clear();
    vector<int> v;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin>> x;
        mp[x]++;
        v.push_back(x);
    }
    // for(auto x : mp)
    //     cout<< x.first << ' '<< x.second;
    sort(v.begin(), v.end(), cmp);
    for(auto x : v)
        cout<< x << ' ';
}

int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        testCase();
        cout<< endl;
    }
    return 0;
}