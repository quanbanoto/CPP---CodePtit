#include<bits/stdc++.h>
using namespace std;

struct GiangVien
{
    string ten, bomon, magv = "GV", mabomon;
};

string mabomon(string s)
{
    stringstream ss(s);
    string tmp;
    string a = "";
    while(ss >> tmp)
        a += toupper(tmp[0]);
    return a;
}

void nhap(GiangVien &a, int i)
{
    getline(cin, a.ten);
    getline(cin, a.bomon);
    a.mabomon = mabomon(a.bomon);
    a.magv += to_string(i + 1);
    while(a.magv.length() < 4)
        a.magv.insert(2, "0");

}

void in(GiangVien a)
{
    cout<< a.magv<< ' '<< a.ten<< ' '<< a.mabomon<< endl;
}

void query(GiangVien a[], int n)
{
    string s;
    getline(cin , s);
    string k = mabomon(s);
    cout<< "DANH SACH GIANG VIEN BO MON "<< k<< ":\n";
    for(int i = 0; i < n; i++)
        if(s == a[i].bomon)
            in(a[i]);
}

int main()
{
    int n;
    cin>> n;
    scanf("\n");
    GiangVien gv[n];
    for(int i = 0; i < n; i++)
        nhap(gv[i], i);
    int q;
    cin>> q;
    scanf("\n");
    while(q--)
        query(gv, n);
    return 0;
}