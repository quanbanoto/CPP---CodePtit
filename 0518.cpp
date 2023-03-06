#include<bits/stdc++.h>
using namespace std;

int k = 0;

struct NhanVien
{
    string maNV, ten, gioiTinh, ngaySinh, diaChi, maThue, ngayKiHD;
};

void chuanHoaNgay(string &s)
{
    if(s[1] == '/')
        s = '0' + s;
    if(s[4] == '/')
        s.insert(3, "0");
    while(s.size() != 10)
        s.insert(6, "0");
}

void nhap(NhanVien &a)
{
    k++;
    if(k == 1)
        cin.ignore();
    a.maNV = "" + to_string(k);
    while(a.maNV.size() < 5)
        a.maNV = "0" + a.maNV;
    getline(cin, a.ten);
    getline(cin, a.gioiTinh);
    getline(cin, a.ngaySinh);
    getline(cin, a.diaChi);
    getline(cin, a.maThue);
    getline(cin, a.ngayKiHD);
    chuanHoaNgay(a.ngayKiHD);
    chuanHoaNgay(a.ngaySinh);
    while(a.maThue.size() < 10)
        a.maThue = "0" +a.maThue;
}

int to_Number(string &s)
{
    int res = 0;
    int len = s.size();
    for(int i = 0; i < len; i++)
        res = res * 10 + (int)(s[i] - '0');
    return res;
}

void swaP(NhanVien &a, NhanVien &b)
{
    NhanVien tmp = a;
    a = b;
    b = tmp;
}
bool soSanhNgaySinh(string s, string ss)
{
    for(int i = 6; i < 10; i++)
    {
        if(s[i] > ss[i])
            return true;
        if(s[i] < ss[i])
            return false;
    }

    for(int i = 0; i<= 1; i++)
    {
        if(s[i] > ss[i])
            return true;
        if(s[i] < ss[i])
            return false;
    }

    for(int i = 3; i < 5; i++)
    {
        if(s[i] > ss[i])
            return true;
        if(s[i] < ss[i])
            return false;
    }
    return true;
}

void sapxep(NhanVien a[], int n)
{
    for(int i = 0; i < n; i++)
        for(int j = i + 1; j < n; j++)
            if(soSanhNgaySinh(a[i].ngaySinh, a[j].ngaySinh))
                swaP(a[i], a[j]);
}

void inds(NhanVien a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout<< a[i].maNV<< ' '<< a[i].ten<< ' '<< a[i].gioiTinh<< ' '<< a[i].ngaySinh<< ' '<< a[i].diaChi<< ' '<< a[i].maThue<< ' '<< a[i].ngayKiHD<< '\n';
    }
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}