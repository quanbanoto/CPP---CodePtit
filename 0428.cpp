#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int n, m;
        cin>>n >> m;
        int *a = new int[2000000];
        for(int i = 0; i < m + n; i++)
            cin>> a[i];
        sort(a, a + (n + m));
        for(int i = 0; i < m + n; i++)
            cout<< a[i]<< ' ';
        delete[] a;
    }
    return 0;
}