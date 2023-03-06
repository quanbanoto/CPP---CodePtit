#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int n;
        cin>> n;
        ll *a = new ll[n + 10];
        set<ll> s;
        for(ll i = 0; i < n; i++)
        {
            cin>> a[i];
            s.insert(a[i]);
        }
        for(ll i = 0; i < n; i++)
        {
            if(s.count(i))
                cout<< i<< ' ';
            else
                cout<< "-1 ";
        }
        cout<< endl;
    }
    return 0;
}

//tao 1 set chua cac phan tu cua mang;
//chay vong for, su dung ham s.count(i), neu s.count(i) == 0  ->
// a[i] = -1 
//neu bang 1 thi a[i] = i;