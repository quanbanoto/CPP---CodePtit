#include<bits/stdc++.h>
using namespace std;

void chuanhoa(string &s)
{
	for(int i = 0; i < s.size(); i++)
		s[i] = tolower(s[i]);
}

int main()
{
    ifstream f1, f2;
    f1.open("DATA1.txt");
    f2.open("DATA2.txt");
    set<string> v1, v2, hop;
    string x;
    while(f1 >> x)
    {
    	chuanhoa(x);
        v1.insert(x);
        hop.insert(x);
    }
    while(f2 >> x)
    {
    	chuanhoa(x);
        v2.insert(x);
        hop.insert(x);
    }
    for(string x : hop)
        cout<< x << ' ';
    cout<< endl;
    for(string x : v1)
        if(v2.find(x) != v2.end())
            cout<< x << ' ';
    return 0;
}
