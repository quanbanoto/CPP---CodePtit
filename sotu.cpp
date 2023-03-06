#include<bits/stdc++.h>
using namespace std;

int sotu(string s)
{
    stringstream ss(s);
    int x = 0;
    string temp = "";
    while(ss >> temp)
        ++x;
    return x;
}
int main()
{
	cout<<sotu(" 5 55 5 5");
}
