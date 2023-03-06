#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int n;
        cin>> n;
        ll *a = new ll[n];
        int dem = 0;
        for(int i = 0; i < n; i++)
        {
            cin>> a[i];
            if(a[i] == 0)
                ++dem;
        }
        for(int i = 0; i < n; i++)
        {
            if(a[i] != 0)
                cout<< a[i]<<' ';
        }

        while(dem --)
            cout<< "0 ";
        cout<< endl;
    }
    return 0;
}