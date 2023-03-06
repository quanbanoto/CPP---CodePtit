//cpp0423: tim so phep hoan vi nho nhat de dua cac phan tu be
// hon bang k lai gan nhau

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int n, k;
        cin>> n>> k;
        int *a = new int[n];
        int cnt = 0; // dem so phan tu nho hon bang
        for(int i = 0; i < n; i++)
        {
            cin>> a[i];
            if(a[i] <= k)
                ++cnt;
        }
        int dem = 0; 
        // dem so phan tu trong 1 cua 
        //so cnt phan tu xem co bao nhieu phan tu <= k;
        for(int i = 0; i < cnt; i++)
            if(a[i] <= k)
                ++dem;
        int res = dem;
        for(int i = cnt; i < n; i++)
        {
            if(a[i - cnt] <= k)
                --dem;
            if(a[i] <= k)
                ++dem;
            res = max(res, dem);
        }
        delete[] a;
        cout<< cnt - res<< endl;
    }
    return 0;
}