#include<bits/stdc++.h>
using namespace std;
/// a[i] <= a[i - 1] neu i chan
/// a[i] >= a[i - 1] neu i le
///      1 2 3 4 5 6 7 8
/// ->   1 5 2 6 3 7 4 8
void solve()
{
    int n;
    cin>> n;
    int *a = new int[n];
    for(int i = 0; i < n; i++)
        cin>> a[i];
    sort(a, a + n);
    int i = 0;
    int x = n / 2;
    if(n % 2 == 1)
        x ++;
    while(i < n / 2)
    {
        cout<< a[i] << ' '<< a[i + x] << ' ';
        i++;
    }
    if(n % 2 == 1)
        cout<< a[n / 2];
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
}