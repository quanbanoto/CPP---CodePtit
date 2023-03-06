#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int checkDauDong = 1;
    while(cin >> s)
    {
        int len = s.size();

        for(int i = 0; i < len; i++)
            s[i] = tolower(s[i]);

        if(checkDauDong == 1)
        {
            s[0] = toupper(s[0]);
            checkDauDong = 0;
        }
        
        if(s[len - 1] == '.' || s[len - 1] == '!' || s[len - 1] == '?')
        {
            s.erase(s.end() - 1);
            checkDauDong = 1;
            cout << s << endl;
        }
        
        else
            cout << s << ' ';
    }
    return 0;
}