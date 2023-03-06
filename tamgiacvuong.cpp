#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n;
    cin>> n;
    ll *a = new ll[n];
    multiset<ll> ms;
    for(ll i = 0; i < n; i++)
    {
        cin>> a[i];
        ms.insert(a[i]);
    }    
    for(ll i = 0; i < n; i ++)
    {
        for(ll j = 0; j < n; j++)
        {
            ll tmp = sqrt(a[i] * a[i] + a[j] * a[j]);
            if(tmp*tmp == a[i] * a[i] + a[j] * a[j])
            {
                if(ms.find(tmp) != ms.end())
                {
                    cout<< "YES";
                    return;
                }
            }
        }
    }
    cout<< "NO";
}
// 1 3 4 5 6
int main()
{
    ll t;
    cin>> t;
    while(t--)
    {
        solve();
        cout<< endl;
    }
    return 0;
}