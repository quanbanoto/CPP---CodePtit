#include<bits/stdc++.h>
using namespace std;

void testCase()
{
    int n, m;
    cin>> n >> m;
    int *a = new int[n];
    int *b = new int[m];
    for(int i = 0; i < n; i++)
        cin>> a[i];
    sort(a, a + n);
    for(int i = 0; i < m; i++)
        cin>> b[i];
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            {
                if(b[i] == a[j] && b[i] != 0)
                {
                    cout<< b[i]<< ' ';
                    a[j] = 0;
                }
            }
    for(int i = 0; i < n; i++)
        if(a[i] != 0)
            cout<< a[i]<< ' ';
}

int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        testCase();
        cout<< endl;
    }
    return 0; 
}
