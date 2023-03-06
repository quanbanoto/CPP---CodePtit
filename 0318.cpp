#include<bits/stdc++.h>
using namespace std;

bool checkBienSoDep(string s)
{
    int check = 1;
    for(int i = 0; i < 4; i++)
        if(s[i] > s[i + 1])
            check = 0;
    if(check == 1)
        return true;
    for(int i = 0; i < 4; i++)
        if(s[i] != s[i + 1])
            check = 0;
    if(check == 1)
        return true;
    
        
}

void solve()
{
    string s;
    cin>> s;
    string a = "";
    for(int i = 5; i < 11, i != 8; i++)
        a = s[i] + a;

}
// i thuoc {5,6,7,9,10}
int main()
{
    int t;
    cin>> t;
    cin.ignore();
    while(t--)
    {
        solve();
        cout<< endl;
    }
    return 0;
}