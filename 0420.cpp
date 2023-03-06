#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int n, x;
        cin>> n>> x;
        int *a = new int[n + 5];
        multimap<int, int> mp;
        for(int i = 0; i < n; i++)
        {
            cin>> a[i];
            mp.insert({abs(x - a[i]), a[i]});
        }
        for(auto x : mp)
            cout<<x.second<<' ';
        cout<< endl;

    }
}