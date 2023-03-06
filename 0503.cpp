#include<bits/stdc++.h>
using namespace std;
#define ll long long
struct PhanSo
{
    long long tu, mau;
};

void nhap(PhanSo &a)
{
    cin>> a.tu>> a.mau;
}

ll Ucln(ll a, ll b)
{
    while(b != 0)
    {
        ll x = a % b;
        a = b;
        b = x;
    }
    return a;
}

void rutgon(PhanSo &a)
{
    ll x = __gcd(a.mau, a.tu);
    a.mau /= x;
    a.tu /=x;
}

void in(PhanSo a)
{
    cout<< a.tu<< '/'<<a.mau;
}

int main()
{
    struct PhanSo p;
    nhap(p);
    rutgon(p);
    in(p);
    return 0;
}