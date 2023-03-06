#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    vector<int> v;
    map<int, int> m;
    while(cin>> x)
    {
        v.push_back(x);
        m[x]++;
    }
    for(auto i : v)
    {
        if(m[i] != 0)
        {
            cout<< i<< ' '<< m[i]<< endl;
            m[i] = 0;
        }
    }
    return 0;
}