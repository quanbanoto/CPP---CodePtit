#include<bits/stdc++.h>
using namespace std;
#include<fstream>
int main()
{
	ifstream f;
	f.open("DATA.in");
	int n, m;
	int a[1000], b[1000];
	f >> n >> m;
	set<int> v1, v2;
	for(int i = 0; i < n; i++)
	{
		f>> a[i];
		v1.insert(a[i]);
	}
	for(int i = 0; i < m; i++)
	{
		f>> b[i];
		v2.insert(b[i]);
	}
	for(int x : v2)
		if(v1.find(x) != v1.end())
			cout<< x<< ' ';
	f.close();
	return 0;
}
