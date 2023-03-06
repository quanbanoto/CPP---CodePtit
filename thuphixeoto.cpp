#include<bits/stdc++.h>
using namespace std;
#define ll long long
struct XeOto
{
    int soGhe;
    string ngay, io;
};

void solve()
{
    
    int n;
    cin>> n;
    cin.ignore();
    XeOto oto[n];
    map<int, int> tien = {{5, 10000}, {7, 15000}, {2, 20000}, {29, 50000}, {45, 70000}};
    map<string, int> mp;
    string tmp1, tmp2;

    for(int i = 0; i < n; i++)
    {
        cin>> tmp1>> tmp2>> oto[i].soGhe>> oto[i].io>> oto[i].ngay;
        mp[oto[i].ngay] = 0;
    }

    for(int i = 0; i < n; i++)
    {
        if(oto[i].io == "IN")
        {
            mp[oto[i].ngay] += tien[oto[i].soGhe];
        }
    }
    for(auto x : mp)
        cout<< x.first<<": "<< x.second<< endl;
}

int main()
{
    solve();
    return 0;
}