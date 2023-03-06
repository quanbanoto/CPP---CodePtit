#include<bits/stdc++.h>
using namespace std;

int binary_Search( int *a, int l, int r, int x)
{
    while( l <= r)
    {
        int mid = (l + r) / 2;
        if(a[mid] == x)
            return mid + 1;
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
        int *a = new int[n + 5];
        int j;
        for(int i = 0; i < n; i++)
            cin>> a[i];
        for(int i = 0; i < n - 1; i++)
            if(a[i] > a[i + 1])
            {
                j = i; 
                break;
            }
        if(binary_Search(a, 0, j, x) != 0)
            cout<< binary_Search(a, 0, j, x);
        else
            cout<< binary_Search(a, j + 1, n - 1, x);
        cout<< endl;
    }
    return 0;
}