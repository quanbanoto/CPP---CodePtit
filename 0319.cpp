#include<bits/stdc++.h>
using namespace std;

string soLonNhat(int cs, int s)
{
    if(s > (9 * cs) || (cs > 1 && s == 0))
        return "-1";
    string a ="";
    int x = 0; 
    while(s >= 9)
    {
        s -= 9;
        a = a + to_string(9);
    }
    if(a.length() < cs)
        a = a + to_string(s);
    while(a.length() < cs)
        a = a + '0';
    return a;
}

string soNhoNhat(int cs, int s)
{
    if(s > (9 * cs) || (cs > 1 && s == 0))
        return "-1";
    int x = 1;
    if(s > (9 * (cs - 1)))
        x = s - 9 * (cs - 1);
    s -= x;
    string a = to_string(x);
    while(s >= 9)
    {
        s -= 9;
        a = a + to_string(9);
    }
    if(a.length() < cs)
        a.insert(1, to_string(s));
    while(a.length() < cs) 
        a.insert(1, "0");
    return a;
}

int main()
{
    int cs, s;
    cin>> cs>> s;
    cout<< soNhoNhat(cs, s) << ' '<< soLonNhat(cs, s);
    return 0;
}