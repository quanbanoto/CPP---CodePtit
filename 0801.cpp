#include<bits/stdc++.h>
using namespace std;

int main()
{
	ifstream f1;
	f1.open("PTIT.in");
	ofstream f2;
	f2.open("PTIT.in");
	string tmp;
	while(!f1.eof())
	{
		getline(f1,	tmp);
		f2 << tmp << endl;
	}
	f1.close();
	f2.close();
	return 0;
}
