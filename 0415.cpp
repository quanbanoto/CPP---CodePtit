#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int n, m;
        cin>> n>> m;
        int *a = new int[n];
        set<int> A;
        for(int i = 0; i < n; i++)
        {
            cin>> a[i];
            A.insert(a[i]);
        }
        delete[] a;
        int *b = new int[m];
        set<int> B;
        for(int i = 0; i < m; i++)
        {
            cin>> b[i];
            B.insert(b[i]);
        }
        delete[] b;
        int maxA = *A.rbegin();
        int minB = *B.begin();
        cout<< (long long)maxA * minB<< endl;
    }
    return 0;
}
