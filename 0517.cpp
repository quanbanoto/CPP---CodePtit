#include<bits/stdc++.h>
using namespace std;

int i = 0;
struct NhanVien
{
    string id, name, sex, birthDay, address, taxCode, agreeDate;
};

void xoa(int i)
{
    if(i == 1)
        cin.ignore();
}

void chuanHoa(string &s)
{
    if(s[1] < '0' || s[1] > '9') s = '0' + s;
    if(s[4] < '0' || s[4] > '9') s.insert(3, "0");
    while(s.size() != 10)
        s.insert(6, "0");
}

void nhap(NhanVien &a)
{
    ++i;
    xoa(i);
    getline(cin, a.name);
    getline(cin, a.sex);
    getline(cin, a.birthDay);
    getline(cin, a.address);
    getline(cin, a.taxCode);
    getline(cin, a.agreeDate);
    chuanHoa(a.birthDay);
    chuanHoa(a.agreeDate);
}

void inds(NhanVien ds[], int n)
{
    for(int i = 0; i < n; i++)
    {
        ds[i].id += to_string(i +  1);
        while(ds[i].id.size() != 5)
            ds[i].id = '0' +ds[i].id;
        cout<< ds[i].id<<' '<<ds[i].name<<' '<<ds[i].sex<< ' '<< ds[i].birthDay <<' '<< ds[i].address<<' ' << ds[i].taxCode<< ' '<<ds[i].agreeDate<< '\n';
    }
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) 
        nhap(ds[i]);
    inds(ds,N);
    return 0;
}