#include<bits/stdc++.h>
using namespace std;

struct SinhVien
{
    string maSV, hoTen, lop, ngaySinh;
    float GPA;
};

void maSv(string &s, int i)
{
    if(i < 10)
        s = s + '0' + to_string(i);
    else 
        s = s + to_string(i); 
}

void ChuanHoaNgaySinh(string &s)
{
    if(s[1] == '/') s = '0' + s;
    if(s[4] == '/') s.insert(3, "0");
    while(s.size() != 10) 
        s.insert(6, "0");
}

void nhap(SinhVien ds[], int n)
{
    for(int i = 1; i <= n; i++)
    {
        ds[i].maSV = "B20DCCN0";
        cin.ignore();
        getline(cin, ds[i].hoTen);
        getline(cin, ds[i].lop);
        getline(cin, ds[i].ngaySinh);
        ChuanHoaNgaySinh(ds[i].ngaySinh);
        cin>> ds[i].GPA;
        maSv(ds[i].maSV, i); //chuan hoa ma sinh vien
    }
}

void in(SinhVien ds[], int n)
{
    for(int i = 1; i <= n; i++ )
    {
        cout<< ds[i].maSV<<' '<< ds[i].hoTen<< ' '<< ds[i].lop<< ' '<< ds[i].ngaySinh<< ' ';
        printf("%.2f", ds[i].GPA);
        cout<< endl;
    }
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}