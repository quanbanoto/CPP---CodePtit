#include<bits/stdc++.h>
using namespace std;

struct GiaoVien
{
    string maNgach, ten;
    int luongCoBan;
};

int to_Number(string s)
{
    int res = 0;
    for(int i = 2; i <= 3; i++)
    {
        res = res * 10 +(int)(s[i] -'0');
    }
    return res;
    
}

int main()
{
    map<string, int> phucap ={{"HT", 2000000}, {"HP", 900000}, {"GV", 500000}};
    GiaoVien a;
    getline(cin, a.maNgach);
    getline(cin, a.ten);
    cin>> a.luongCoBan;
    string PhuCap = "";
    PhuCap =  PhuCap + a.maNgach[0] + a.maNgach[1];
    int Heso = to_Number(a.maNgach);
    cout<< a.maNgach<< " "<< a.ten<< " "<< Heso<< " "<< phucap[PhuCap]<< " "<<Heso * a.luongCoBan + phucap[PhuCap];
    return 0;
}