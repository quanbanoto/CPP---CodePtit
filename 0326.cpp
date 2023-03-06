#include<bits/stdc++.h>
using namespace std;

void Swap(string &a, string &b)
{
    if( a.length() < b.length())
        Swap(a, b);
}

string Sum(string a, string b)
{
    int len = a.length();
    Swap(a, b);
    //100001
    //99
    while(b.length() < a.length())
        b = "0" + b;
    //100001
    //000099
    int nho = 0;
    string res = "";
    for(int i = len - 1; i >= 0; i-- )
    {
        int so = (int)(a[i] - '0') + (int)(b[i] - '0') + nho;
        res = char(so % 10 + '0') + res;
        nho = so % 10;
    }
    if(nho = 1)
        res = '1' + res;
    return res;
}



void testCase()
{
    string a, b;
    cin>> a>> b;
    Swap(a, b);
    string res = "";
    for(int i = )
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
    return 0;
}