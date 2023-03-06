#include<bits/stdc++.h>
using namespace std;

struct NhanVien
{
    string name, sex, birthDay, address, taxCode, agreementDate;
};

void chuanHoa(string &s)
{
    if(s[1] < '0' || s[1] > '9')
        s = '0' + s;
    if(s[4] < '0' || s[4] > '9')
        s.insert(3, "0");
    while(s.size() < 10)
    s.insert(6, "0");
}

void nhap(NhanVien &a)
{
    getline(cin, a.name);
    getline(cin, a.sex);
    getline(cin, a.birthDay);
    getline(cin, a.address);
    getline(cin, a.taxCode);
    getline(cin, a.agreementDate);
    chuanHoa(a.birthDay);
    chuanHoa(a.agreementDate);
}

void in(NhanVien &a)
{
    cout<< "00001 "<< a.name<< ' '<< a.sex<< ' '<< a.birthDay<< " "<< a.address<< ' '<< a.taxCode<< ' '<< a.agreementDate;
}

int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}