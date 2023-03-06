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
    int n;
    cin>> n;
    string s[n];
    cin.ignore();
    int a[n] ={};
    int thetho[n]={};
    int sobaitho = 0;
    for(int i = 0; i < n; i++)
    {
        getline(cin, s[i]);
        a[i] = sotu(s[i]);
    }
    int j = 0, i = 0;
    while(i < n)
    {
        if(a[i] == 6)
        {
            while(a[i] == 6 || a[i] == 8)
                ++i;
            thetho[j++] = 1;
        }

        if(a[i] == 7)
        {
            int k = 0;
            while(a[i] == 7)
            {
                ++i;
                ++k;
                if(k % 4 == 0)
                    thetho[j++] = 2;
            }
        }
    }
    cout<< j<< endl;
    for(int k = 0; k < j; k++)
        cout<<thetho[k]<< endl;
    return 0;
}