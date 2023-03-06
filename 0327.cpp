// 1 2 4 8 6 2 4 8 6 2 4  8  6
// 0 1 2 3 4 5 6 7 8 9 10 11 12
#include<bits/stdc++.h>
using namespace std;

void testCase()
{
    string s;
    cin>> s;
    int len = s.length();
    reverse(s.begin(), s.end());
    int so = 0;
    if(s[0] == '1')
        so += 1;
    for(int i = 1; i < len; i++)
    {
        if(s[i] == '1')
        {
            if(i % 4 == 1)
                so += 2;
            if(i % 4 == 2)
                so += 4;
            if(i % 4 == 3)
                so += 8;
            if(i % 4 == 0)
                so += 6;
        }
    }
    if(so % 5 == 0)
        cout<< "Yes";
    else cout<< "No";
}

int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        testCase();
        cout<< endl;
    }
}