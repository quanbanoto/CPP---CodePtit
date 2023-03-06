#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int k, n;
        cin>> k>> n;
        multiset<int> s;
        int a[n * k];
        for(int i = 0; i < k* n; i++)
        {
            cin>> a[i];
            s.insert(a[i]);
        }
        for(int x : s)
            cout<< x<< ' ';
        cout<< endl;
    }
    return 0;
}