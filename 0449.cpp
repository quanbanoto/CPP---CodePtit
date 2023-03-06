#include<bits/stdc++.h>
using namespace std;

int distanceX(vector<int> v, int x1)
{
    int len = v.size();
    for(int i = len; i >= 0; i--)
    {
        int a = v[i] - x1;
        if(binary_search(v.begin(), v.end() , a))
            return 1;
    }   
    return -1;
}

void testCase()
{
    int n, x1;
    cin>> n>> x1;
    set<int> s; 
    for(int i = 0; i < n; i++)
    {
        int x;
        cin>> x;
        s.insert(x);
    }
    vector<int> v;
    for(auto x : s)
        v.push_back(x);
    cout<< distanceX(v, x1);
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