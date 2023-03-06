#include<bits/stdc++.h>
using namespace std;
#define ll long long

struct PhanSo
{
    ll tu, mau;
};


void nhap(PhanSo &a)
{
    cin>> a.tu>> a.mau;
}

void rutGon(PhanSo &a)
{
    ll x = __gcd(a.mau, a.tu);
    a.tu /= x;
    a.mau /= x;
}

PhanSo tong(PhanSo &a, PhanSo &b)
{
    ll k = (a.mau * b.mau) / __gcd(a.mau, b.mau);
    a.tu = (k / a.mau) * a.tu + (k / b.mau) * b.tu;
    a.mau = k;
    rutGon(a);
    return a;
}

void in(PhanSo &a)
{
    cout<< a.tu<< '/'<< a.mau;
}

int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}