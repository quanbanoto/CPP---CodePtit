#include<bits/stdc++.h>
using namespace std;

struct DoanhNghiep
{
    string madn, ten;
    int sosvmax;
};

void nhap(DoanhNghiep &a)
{
    scanf("\n");
    getline(cin, a.madn );
    getline(cin, a.ten);
    cin>> a.sosvmax;
}

void in(DoanhNghiep a)
{
    cout<< a.madn<< ' '<< a.ten<< ' ' << a.sosvmax<< endl;
}

bool cmp(DoanhNghiep a, DoanhNghiep b)
{
    if(a.sosvmax == b.sosvmax)
        return a.madn < b.madn;
    return a.sosvmax > b.sosvmax;
}
int main()
{
    int n;
    cin>> n;
    DoanhNghiep a[n];
    for(int i = 0; i < n; i++)
        nhap(a[i]);
    sort(a, a + n, cmp);
    int query;
    cin>> query;
    while(query--)
    {
        int x, y;
        cin>> x>> y;
        if(x > y)
            swap(x, y);
        cout<< "DANH SACH DOANH NGHIEP NHAN TU "<< x<< " DEN "<< y<< " SINH VIEN:\n";
        for(int i = 0; i < n; i++)
            if(a[i].sosvmax >= x && a[i].sosvmax <= y)
                in(a[i]);
    }
    return 0;
}