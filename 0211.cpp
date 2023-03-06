#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>> n;
    int *a;
    a = new int[n];
    for(int i = 0; i < n; i++)
        cin>> a[i];
    int Max = 0; 
    for(int i = 0; i < n; i++)
    {
        for(int j = n - 1; j > i; j--)
        {
            if(a[j] >= a[i])
            {
                Max = max(Max, j - i);
                break;
            }
        }
    }
    cout<< Max;
}
int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        solve();
        cout<< endl;
    }
    return 0;
}