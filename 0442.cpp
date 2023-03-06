#include<bits/stdc++.h>
using namespace std;

int a[1000000];

bool binary_Search(int l, int r, int x)
{
    while(l <= r)
    {
        int mid = (l + r) / 2;
        if(a[mid] == x)
            return 1;
        else if(a[mid] > x)
            r = mid - 1;
        else 
            l = mid + 1;
    }
    return 0;
}

int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int n, x;
        cin>> n>> x;
        for(int i = 0; i < n; i++)
            cin>> a[i];
        sort(a, a + n);
        if(binary_Search(0, n - 1, x))
            cout<< 1;
        else
            cout<< -1;
        cout<< endl;
    }
}