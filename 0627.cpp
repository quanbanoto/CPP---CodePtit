#include<bits/stdc++.h>
using namespace std;

struct GiangVien
{
	string ten, magv = "GV", mabomon, bomon;	
};

string mabomon(string s)
{
	stringstream ss(s);
	string tmp;
	string a = "";
	while(ss >> tmp)
	{
		a += toupper(tmp[0]);
	}
	return a;
}

string chuanhoa(string s)
{
	for(int i =  0; i < s.length(); i++)
		s[i] = toupper(s[i]);
	return s;
}

void nhap(GiangVien &a, int i)
{
	getline(cin, a.ten);
	getline(cin, a.bomon);
	a.mabomon = mabomon(a.bomon);
	a.magv += to_string(i + 1);
    while(a.magv.length() < 4)
        a.magv.insert(2, "0");
}

void in(GiangVien a)
{
	cout<< a.magv<< ' '<< a.ten<< ' '<< a.mabomon<< endl;
}

void query(GiangVien a[], int n)
{
	string s;
	getline(cin, s);
	cout<< "DANH SACH GIANG VIEN THEO TU KHOA "<< s<< ":\n";
	s = chuanhoa(s);
    // cout<< s << ' ';
	for(int i = 0; i < n; i++)
	{
		string k = chuanhoa(a[i].ten);
        // cout<< k << ' ';
		if(k.find(s) < k.length())
			in(a[i]);
	}
}

int main()
{
	int n;
	cin>> n;
	GiangVien a[n];
	scanf("\n");
	for(int i = 0; i < n; i++)
		nhap(a[i], i);
	int t;
	cin>> t;
	scanf("\n");
	while(t--)
		query(a, n);
}
