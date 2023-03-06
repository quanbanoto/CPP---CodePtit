#include<bits/stdc++.h>
using namespace std;

void chuanHoa(string &s)
{
	for(int i = 0; i < s.size(); i++)	
		s[i] = tolower(s[i]);
}

int main()
{
	ifstream f;
	f.open("VANBAN.txt");
	map<string,int> a;
	string s;
	while(f >> s)
	{
		chuanHoa(s);
		a[s]++;
	}
	for(auto x : a)
		cout<< x.first<< endl;
}
