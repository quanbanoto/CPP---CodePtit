#include<bits/stdc++.h>
using namespace std;

struct SinhVien
{
    string name, className, birthDay, maSV;
    double GPA;
};

void chuanHoa(string &s)
{
    if(s[1] < '0' || s[1] > '9')    s = '0' + s;
    if(s[4] < '0' || s[4] > '9')    s.insert(3, "0");
    while(s.size() != 10)
        s.insert(6, "0");
}

void nhapThongTinSV(SinhVien &a)
{
    a.maSV = "N20DCCN001";
    getline(cin, a.name);
    cin>> a.className;
    cin>> a.birthDay;
    cin>> a.GPA;
    chuanHoa(a.birthDay);
}

void inThongTinSV(SinhVien &a)
{
    cout<< a.maSV<< " "<< a.name<< " "<< a.className<< " "<< a.birthDay<< " ";
    printf("%.2f", a.GPA);
}

int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}