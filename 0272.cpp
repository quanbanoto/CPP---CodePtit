#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int m = 1e9 + 7;

ll res(ll a, ll b)
{
    if(b == 1)
        return a;
    if(b % 2 == 0)
        return (res(a, b / 2) * res(a, b /2)) % m;
    else 
        return (a * res (a, b - 1)) % m;
}

void testCase()
{
    int n;
    cin>> n;
    vector<ll> a(n);
    ll tich = 1;
    for(int i = 0; i < n; i++)
    {
        cin>> a[i];
        tich *= a[i];
        tich = tich % m;
    }
    ll ucln = a[0];
    for(int i = 1; i < n; i++ )
        ucln = __gcd(ucln, a[i]);
    cout<< res(tich, ucln);
}
// h(x)^g(x) % m = ((h(x) % m)  ^ g(x)) % m
// (a * b) % m == (a % m * b % m) % m;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>> t;
    while(t--)
    {
        testCase();
        cout<< endl;
    }
    return 0;
}