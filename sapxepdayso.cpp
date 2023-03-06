#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int n, m;
        cin>> n>> m;
        int a[n + 1];
        for(int i = 0; i < n; i++)
            cin>> a[i];
        int max = a[0];
        int j = 0;
        for(int i = 1; i < n; i++)
            if(max < a[i])
            {
                max = a[i];
                j = i;
            }

        for(int i = n; i > j; i--)
            a[i] = a[i - 1];

        a[j] = m;

        for(int i = 0; i <= n; i++)
            if(a[i] < 0 && i != j)
                cout<< a[i]<< ' ';

        for(int i = 0; i <= n; i++)
            if(a[i] >= 0 || i == j)
                cout<< a[i]<<' ';

        cout<< endl;
    }
    return 0;
}