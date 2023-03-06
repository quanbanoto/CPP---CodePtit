#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>> n;
    int a[n];
    multiset<int> s;
    for(int i = 0; i < n; i++)
    {
        cin>> a[i];
    }
    sort(a, a + n);
    int l = 0, r = n - 1;
    while(l < n /2 && r >= n /2)
        cout<< a[r--]<<' '<< a[l++]<<' '; 
    if( n % 2 == 1)
        cout<< a[n / 2];
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