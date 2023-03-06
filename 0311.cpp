#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>> t;
    cin.ignore();
    while(t--)
    {
        string s;
        cin>> s;
        bool check = true;
        multiset<char> a;
        int len = s.size();
        for(int i = 0; i < len; i++)
            a.insert(s[i]);
        if(len % 2 == 0)
        {
            for(auto x : s)
                if(a.count(x) > len / 2 )
                {
                    check = false;
                    break;
                }
        }
        else
            for(auto x : s)
                if(a.count(x) > len / 2 + 1)
                {
                    check = false;
                    break;
                }
        cout<< (int) check<< endl;
    }
    return 0;
}