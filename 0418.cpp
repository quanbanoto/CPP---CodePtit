#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin>> n>> m;
    set<int> unionnn;
    set<int> aa;
    set<int> bb;
    int *a = new int[n + 5];
    int *b = new int[m + 5];
    for(int i = 0; i < n; i++)
    {
        cin>> a[i];
        unionnn.insert(a[i]);
    }

    for(int i = 0; i < m; i++)
    {
        cin>> b[i];
        if (unionnn.count(b[i]) != 0)
            bb.insert(b[i]);
        else
            unionnn.insert(b[i]);
    }
    for(auto x : unionnn)
        cout<< x << ' ';
    cout<< endl;   
    for(auto x : bb)
        cout<< x << ' ';
    delete[] a;
    delete[] b;
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