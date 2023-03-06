#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int n;
        cin>> n;
        n -= 1;
        int *a = new int[n];
        set<int> s;
        for(int i = 0; i < n; i++)
            cin>> a[i];
        sort(a,a + n);
        int i;
        for(i = 1; i < n; i++)
            if(a[i] - a[i - 1] > 1)
            {
                cout<< a[i - 1] + 1<< endl;
                break;
            } 
        if(i == n)
            cout<< a[i - 1] + 1<< endl;
    }
    return 0;
}