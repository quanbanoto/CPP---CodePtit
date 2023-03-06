#include<bits/stdc++.h>
using namespace std;

struct SinhVien
{
    string Name, Class, BirthDay;
    float score;
};

void nhap(SinhVien &a)
{
    getline(cin, a.Name);
    getline(cin, a.Class);
    getline(cin, a.BirthDay);
    cin>> a.score;
    string res = a.BirthDay;
    if(res[1] > '9' || res[1] < '0') 
        res = '0' + res;
    if(res[4] > '9' || res[4] < '0') 
        res.insert(3, "0");
    while(res.size() < 10)
        res.insert(6, "0");    
    a.BirthDay = res;
}

void in(SinhVien &a)
{
    cout<<"B20DCCN001 "<<a.Name<< ' '<< a.Class<< ' '<< a.BirthDay<<' ';
    printf("%.2f", a.score);
}

int main()
{
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}