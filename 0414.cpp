#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int n;
        cin>> n;
        cin.ignore();
        string s;
        getline(cin, s);
        set<char> ss;
        for(auto x: s)
            if(x != ' ')
                ss.insert(x);
        for(auto x: ss)
            cout<< x<< ' ';
        cout<< endl;
    }
}