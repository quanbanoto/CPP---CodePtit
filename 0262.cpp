#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool check(ll n, ll m)
{
    ll x = n * (n + 1) / 2;
    ll y = x - m;
    ll z = x - y;
    if(__gcd(z, y) != 1)
        return false;
    return true;
}

int main()
{
    ll t;
    cin>> t;
    while(t--)
    {
        ll n, m;
        cin>> n>> m;
        if(check(n, m))
            cout<< "Yes";
        else cout<< "No";
        cout<< endl;
    }
    return 0;
}
//