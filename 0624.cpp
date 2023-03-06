#include<bits/stdc++.h>
using namespace std;

void ChuanHoa(string &s)
{
    for(int i = 0; i < s.length(); i++)
        s[i] = toupper(s[i]);
}

struct SinhVien
{
    string masv, ten, lop, email;
    string nganh;
};

string Nganh(string a, string b)
{
    if(a == "K")
        return "KE TOAN";
    if(a == "V")
        return "VIEN THONG";
    if(a == "D")
        return "DIEN TU";
    if(a == "C" && b[0] == 'D')
        return "CONG NGHE THONG TIN";
    if(a == "A" && b[0] == 'D')
        return "AN TOAN THONG TIN";
    return "";
}

void nhap(SinhVien &a)
{
    getline(cin, a.masv);
    getline(cin, a.ten);
    getline(cin, a.lop);
    getline(cin, a.email);
    a.nganh += a.masv[5];
    a.nganh = Nganh(a.nganh, a.lop);
}

void in(SinhVien a)
{
    cout<< a.masv << ' '<< a.ten<< ' '<< a.lop<< ' '<< a.email<< "\n";
}
int main()
{
    int n;
    cin>> n;
    SinhVien a[n];
    scanf("\n");
    for(int i = 0; i < n; i++)
        nhap(a[i]);
    // for(int i = 0; i < n; i++)
    //     in(a[i]);
    int q;
    cin>> q;
    scanf("\n");
    while(q--)
    {
        string s;
        getline(cin, s);
        ChuanHoa(s);
        cout<<"DANH SACH SINH VIEN NGANH "<< s<< ":\n";
        for(int i = 0; i < n; i++)
            if(a[i].nganh == s)
                in(a[i]);
    }
    return 0;
}