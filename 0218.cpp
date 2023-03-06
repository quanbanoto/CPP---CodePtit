#include<bits/stdc++.h>
using namespace std;

bool check(vector<int> v, int k)
{
    for(int i = 1; i < v.size(); i++)
        if((v[i] - v[0]) % k != 0)
            return false;
    return true;
}

void testCase()
{
    int n;
    cin>> n;
    set<int> s;
    vector<int> v;
    for(int i = 0; i < n; i++)
    {
        int a;
        cin>> a;
        s.insert(a);
    }
    for(auto x : s)
        v.push_back(x);
    if(v.size() == 1 || n == 1)
    {
        cout<< 0;
        return;
    }
    int dem = 0;
    int len = v.size();
    for(int i = 1; i <= v[1]; i++)
        if(check(v, i))
            dem ++;
    cout<< dem;
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