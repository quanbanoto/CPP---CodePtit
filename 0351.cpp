#include<bits/stdc++.h>
using namespace std;

void chuanHoa(string &s)
{
    int len = s.size();
    for(int i = 0; i < len; i++)
        s[i] = tolower(s[i]);
}


//chuyen tu cuoi len dau
void chuan_Hoa_1(string &s)
{
    int len = s.size();
    int x = s.rfind(' ');
    s[x + 1] = toupper(s[x + 1]);
    for(int i = x + 1; i < len; i++)
        cout<< s[i];
    cout<< ' ';
    s[0] = toupper(s[0]);
    cout<< s[0];
    for (int i = 1; i <= x; i++)
    {
        if(s[i] != ' ' && s[i - 1] == ' ')
            s[i] -= 32;
        cout<< s[i];
        while(s[i] == ' ' && s[i + 1] == ' ' )
            ++i;
        
    }
}



//chuyen tu dau len cuoi
void chuan_Hoa_2(string &s)
{
    int len = s.size();
    int x = s.find(' ');
    s[0] -= 32; 
    int j = x;
    while(s[j] == ' ')
        j++;
    
    for(int i = j; i < len; i++ )
    {
        while(s[i] == ' ' && s[i + 1] == ' ')
            ++i;
        if(s[i] != ' ' && s[i - 1 ] == ' ' )
            s[i] -= 32;
        cout<< s[i];
    }
    if(s[len  - 1] != ' ')
    {
        cout<< ' ';
        for(int i = 0; i < x; i++)
            cout<< s[i];
    }
    else 
    {
        for(int i = 0; i < x; i++)
            cout<< s[i];
    } 
}

int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int k;
        cin>> k;
        cin.ignore();
        string s;
        getline(cin, s);
        chuanHoa(s);
        if(k == 1)
            chuan_Hoa_1(s);
        else 
            chuan_Hoa_2(s);
        cout<< endl;
    }
    return 0;
}