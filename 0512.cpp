#include<bits/stdc++.h>
using namespace std;

struct PhanSo
{
    long long tu, mau;
};

void rutGon(PhanSo &A)
{
    long long ucln= __gcd(A.tu, A.mau);
    A.tu /= ucln;
    A.mau /= ucln;
}

void process(PhanSo A, PhanSo B)
{
    PhanSo C, D;
    C.tu = A.tu * B.mau + A.mau * B.tu;
    C.mau = A.mau * B.mau;
    rutGon(C);
    cout<< C.tu * C.tu << "/"<< C.mau * C.mau<< ' ';
    D.tu = A.tu * B.tu * C.tu * C.tu;
    D.mau = A.mau * B.mau * C.mau * C.mau;
    rutGon(D);
    cout<< D.tu<<'/' << D.mau<< endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}