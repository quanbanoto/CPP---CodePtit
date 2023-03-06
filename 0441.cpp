#include<bits/stdc++.h>
using namespace std;
int a[1000000];

int linear_search(int x, int n)
{
    for(int i = 1; i <= n; i++)
        if(a[i] == x)
            return i;
    return -1;
}
int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int n, x;
        cin>> n>> x;
        for(int i = 1; i <= n; i++)
            cin>> a[i];
        cout<< linear_search(x, n)<< endl;
    }
    return 0;
}