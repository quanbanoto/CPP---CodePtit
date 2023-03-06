#include<bits/stdc++.h>
using namespace std;

long long tong = 0;

void tinhTong(string s)
{
	int pos = 0;
	if(s.size() > 10)
		return;
	if(s[0] == '-')
		pos = 1;
	for(int i = pos; i < s.size(); i++)
		if(!isdigit(s[i]))
			return;
	int x = 0;
	for(int i = pos; i < s.size(); i++)
		x = x * 10 + (int)(s[i] - '0');
	if(pos == 1)
		tong -= x;
	else tong += x;
		
}

int main()
{
	ifstream f;
	f.open("DATA.in");
	string a;
	while(f >> a)
		tinhTong(a);
	cout<< tong;
	return 0;
}
