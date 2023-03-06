#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin>> n>> m;
    int *a = new int[n + 5];
    int *b = new int[m + 5];
    set<int> unionnnnnnnn;
    set<int> inter;
    for(int i = 0; i < n; i++)
    {
        cin>> a[i];
        unionnnnnnnn.insert(a[i]);
    }
    for(int i = 0; i < m; i++)
    {
        cin>> b[i];
        if(unionnnnnnnn.count(b[i]) != 0)
            inter.insert(b[i]);
        else 
            unionnnnnnnn.insert(b[i]);
    }
    for(int x : unionnnnnnnn)
        cout<< x<< ' ';
    cout<< endl;
    for(int x : inter)
        cout<< x<< ' ';
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