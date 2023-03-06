#include<bits/stdc++.h>
using namespace std;

bool thuanNghich(string a)
{
    if(a.length() <= 1)
        return false;
    string b = a;
    reverse(a.begin(), a.end());
    if(a == b)
        return true;
    return false;
}

bool cmp(string a, string b)
{
    int x = a.length();
    int y = b.length();
    if(x != y)
        return x > y;
    return a > b;
}

int main()
{
    map<string, int> mp;
    vector<string> v;
    string a;
    while(cin>> a)
    {
        if(thuanNghich(a))
            mp[a]++;
    }
    for(auto x : mp)
        v.push_back(x.first);
    sort(v.begin(), v.end(), cmp);
    for(auto x : v)
        cout<< x << ' '<< mp[x]<< endl;
}