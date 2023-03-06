#include<bits/stdc++.h>
using namespace std;

struct GiangVien
{
    string ten, boMon;
    string magv = "GV";
    string maBoMon;
    string t;
};

string boMon(string s)
{
    stringstream ss(s);
    string temp = "";
    string a = "";
    while(ss >> temp)
    {
        a += toupper(temp[0]);
    }
    return a;
}

string ten(string s)
{
    stringstream ss(s);
    string temp = "";
    while(ss >> temp){};
    return temp;
}

bool cmp(GiangVien a ,GiangVien b)
{
    if(a.t == b.t)
        return a.magv < b.magv;
    return a.t < b.t;
}

int main()
{
    int t;
    cin>> t;
    GiangVien gv[t];
    scanf("\n");
    for(int i = 0; i < t; i ++)
    {
        getline(cin, gv[i].ten );
        getline(cin, gv[i].boMon);
        gv[i].magv += to_string(i + 1);
        while(gv[i].magv.length() < 4)
            gv[i].magv.insert(2, "0");
        gv[i].maBoMon = boMon(gv[i].boMon);
        gv[i].t = ten(gv[i].ten);
    }
    sort(gv, gv + t, cmp);
    for(int i = 0; i < t; i++)
        cout<< gv[i].magv<< ' '<< gv[i].ten<< ' '<< gv[i].maBoMon<< endl;
    return 0;
}