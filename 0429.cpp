#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, b, k;
    // n: so den
    // b: so den bi hong
    // k: so den lien tiep hoat dong;
    // b dong tiep theo la so den bi hong
    cin>> n>> k>> b;
    int *a = new int[n + 5];
    for(int i = 1; i <= n; i++)
        a[i] = 1;
    for(int i = 1; i <= b; i++)
    {
        int x;
        cin>> x;
        a[x] = 0;
    }
    int cnt = 0;
    for(int i = 1; i <= k; i++)
        if(a[i] == 1)
            ++cnt;
    int res = cnt;
    for(int i = k + 1; i <= n; i++)
    {
        if(a[i - k] == 1) 
            cnt --;
        if(a[i] == 1)
            cnt ++;
        res = max (res, cnt);
    }
    if(res >= k)
        cout<< 0;
    else cout<< k - res;
    return 0;
}