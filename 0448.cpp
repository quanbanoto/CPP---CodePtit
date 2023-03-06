#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int n, x;
        cin>> n>> x;
        int a[n];
        multiset<int> s;
        for(int i = 0; i < n; i++)
        {
            cin>> a[i];
            s.insert(a[i]);
        }
        if(s.count(x) != 0)
            cout<< s.count(x)<< endl;
        else cout<< -1<< endl;
    }
    return 0;
}
