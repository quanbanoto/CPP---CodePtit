#include<bits/stdc++.h>
using namespace std;

int find(int *a, int n, int l, int r)
{
    int x = 0;
    for(int i = l; i < r; i++)
        for(int j = i + 1; j <= r; j++)
        {
            if(a[i] == a[j])
            {
                x = a[i];
                r = j - 1;
                break;
            }
        }
    if(x != 0)
        return x;
    return -1;
}

int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int n;
        cin>> n;
        int *a = new int[n];
        for(int i = 0; i < n; i++)
            cin>> a[i];
        cout<< find(a, n, 0, n - 1)<< endl;
    }
}