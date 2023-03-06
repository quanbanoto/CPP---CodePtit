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
        int *a = new int[n];
        for(int i = 0; i < n; i ++)
            cin>> a[i];
        if(n == 1)
            cout<< a[0];
        else if(n == 2)
            cout<< a[0]* a[1]<< ' '<< a[0] * a[1];
        else 
        {
            cout<< a[0] * a[1]<< ' ';
            for(int i = 1; i < n - 1; i++)
                cout<< a[i - 1] * a[i + 1]<< ' ';
            cout<< a[n - 1] * a[n - 2];
        }
        cout<< endl;
    }
    return 0;
}