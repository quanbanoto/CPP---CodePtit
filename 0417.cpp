#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int n, t1, t2;
        cin>> n;
        int *a = new int[n + 5];
        int *b = new int[n + 5];
        for(int i = 0; i < n; i++)
        {    
            cin>> a[i];
            b[i] = a[i];
        }
        sort(a, a + n);
        for(int i = 0; i < n; i++)
            if(a[i] != b[i])
            {
                t1 = i; 
                break;
            }
        for(int i = n - 1; i >= 0; i--)
            if(a[i] != b[i])
            {
                t2 = i;
                break;
            }
        cout<< t1 + 1<< ' '<< t2 + 1<< endl;
    }
    return 0;
}