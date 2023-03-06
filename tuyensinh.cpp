#include<bits/stdc++.h>
using namespace std;

struct TuyenSinh
{
    string ma, hoten;
    float diem;
    string trangthai;
};

int diemUuTien(string s)
{
    if(s[2] == '1')
        return 0.5;
    if(s[2] == '2')
        return 1.0;
    if(s[2] == '3')
        return 2.5;
    return 0;
}

int main()
{
    
    float x, y, z;
    TuyenSinh a;
    getline(cin, a.ma);
    getline(cin, a.hoten);
    cin>>x >> y>> z;
    cout<< x<< y<< z;
    a.diem = x*2 + y + z;
    cout<< a.ma<< ' '<< a.hoten<< ' '<< diemUuTien(a.ma)<< ' '<< a.diem<< ' ';
    if(a.diem + diemUuTien(a.ma) >= 24)
        cout<<"TRUNG TUYEN";
    else cout<< "TRUOT";
    return 0;
}