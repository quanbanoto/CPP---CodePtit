#include<bits/stdc++.h>
using namespace std;

struct SinhVien
{
    string maSV, hoTen, lop, ngaySinh;
    float GPA;
};

void swaP(SinhVien &a, SinhVien &b)
{
        SinhVien tmp = a;
        a = b;
        b = tmp;
}

void chuanHoaHoTen(string &s)
{
    for(int i = 0; i < s.size(); i++)
        s[i] =tolower(s[i]);

    stringstream ss(s);
    string tmp;
    vector<string> v;
    while(ss >> tmp)
    {
        tmp[0] -= 32;
        v.push_back(tmp);
    }
    s = "";
    for(auto x : v)
        s = s + x + " ";
}

void chuanHoaNgaySinh(string &s)
{
    if(s[1] == '/') s = '0' + s;
    if(s[4] == '/') s.insert(3, "0");
    while(s.size() != 10)
        s.insert(6, "0");
}

void maSv(string &s, int i)
{
    if(i < 10) 
        s = s + '0' + to_string(i);
    else 
        s = s + to_string(i);
}

void nhap(SinhVien a[], int n)
{
    for(int i = 1; i <= n; i++)
    {
        cin.ignore();
        getline(cin, a[i].hoTen);
        getline(cin, a[i].lop);
        getline(cin, a[i].ngaySinh);
        cin>> a[i].GPA;
        chuanHoaHoTen(a[i].hoTen);
        chuanHoaNgaySinh(a[i].ngaySinh);
        a[i].maSV = "B20DCCN0";
        maSv(a[i].maSV, i);
    }
}

void sapxep(SinhVien a[], int n)
{
    for(int i = 1; i < n; i++)
        for(int j = i + 1; j <= n; j++)
            if(a[i].GPA < a[j].GPA)
                swap(a[i], a[j]);


}

void in(SinhVien a[], int n)
{
    for(int i = 1; i <= n; i++)
    {
        cout<< a[i].maSV<< ' '<< a[i].hoTen<< ' '<< a[i].lop<<' ' << a[i].ngaySinh<< ' ';
        printf("%.2f\n", a[i].GPA);
    }
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}