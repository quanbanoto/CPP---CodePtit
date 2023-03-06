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
        multiset<int> mt;
        int *a = new int[n + 5];
        for(int i = 0; i < n; i++)
        {
            cin>> a[i];
            mt.insert(a[i]);
        }
        delete[] a;
        for(int x: mt)
         cout<< x<< ' ';
        cout<< endl;
    }
    return 0;
}