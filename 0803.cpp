#include<bits/stdc++.h>
using namespace std;

int main()
{
	ifstream f;
	f.open("DATA.in");
	map<int,int> s;
	int x;
	while(f >> x)
		s[x] ++;
	f.close();
	for(auto x : s)
		cout<< x.first<<' '<< x.second<< endl;
	return 0;
	
}
