#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        string a;
        cin>> a;
        int n = a.length();
        int ok = 0;
        for(int i = n - 2; i >= 0; i--)
            if(a[i] > a[i + 1])
            {
                ok = 1;
                int s = 0, k;
                for(int j = i + 1; j < n; j ++)
                {
                    if(a[j] < a[i] && a[j] > s)
                    {
                        s = a[j];
                        k = j;
                    }
                }
                swap(a[i], a[k]);
                break;
            }
        if(ok == 1)
            cout<< a;
        else cout<< -1;
        cout<< endl;
    }
    return 0;
}