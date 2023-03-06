#include<bits/stdc++.h>
using namespace std;

bool check(vector<int> a)
{
    for(int i = 0; i < a.size() - 1; i++)
        if((a[i] + a[i + 1]) % 2 == 0)
            return false;
    return true;
}

int main()
{
    int n;
    cin>> n;
    vector<int> a;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin>> x;
        a.push_back(x);
    }
    while(!check(a))
    {
        for(int i = 0; i < a.size() - 1; i++)
        {
            if((a[i] + a[i + 1]) % 2 == 0)
            {
                a.erase(a.begin() + i);
                a.erase(a.begin() + i);
                break;
            }
        }
    }
    cout<< a.size();
    return 0;
}