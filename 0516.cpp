#include<bits/stdc++.h>
using namespace std;

struct MatHang
{
    int maMH;
    string tenMH, nhomHang;
    float giaMua, giaBan, loiNhuan;
};

void swaP(MatHang &a, MatHang &b)
{
    MatHang tmp = a;
    a = b;
    b = tmp;
}

void nhap(MatHang a[], int n)
{
    for(int i = 1; i <= n; i++)
    {
        cin.ignore();
        a[i].maMH = i;
        getline(cin, a[i].tenMH);
        getline(cin, a[i].nhomHang);
        cin>> a[i].giaMua>> a[i].giaBan;
        a[i].loiNhuan = a[i].giaBan - a[i].giaMua;
    }
}

void sapxep(MatHang a[], int n)
{
    for(int i = 1; i < n; i++)
        for(int j = i + 1; j <= n; j++)
            if(a[i].loiNhuan  < a[j].loiNhuan)
                swaP(a[i], a[j]);
}

void in(MatHang a[], int n)
{
    for(int i = 1; i <= n; i++)
    {
        cout<< a[i].maMH<<' '<< a[i].tenMH<< ' '<< a[i].nhomHang<< ' ';
        printf("%.2f\n", a[i].loiNhuan);
    }
}

int main()
{
    int t;
    cin>> t;
    struct MatHang mh[t + 5];
    nhap(mh, t);
    sapxep(mh, t);
    in(mh, t);
    return 0;
}