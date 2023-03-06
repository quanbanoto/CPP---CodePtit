#include<bits/stdc++.h>
using namespace std;

void testCase()
{
    int n;
    cin>> n;
    int *a = new int[n];
    int *b = new int[n];
    for(int i = 0; i < n; i++)
    {
        cin>> a[i];
        b[i] = a[i];
    }
    sort(a, a + n);
    for(int i = 0; i < n; i++)
    {
        auto it = upper_bound(a, a + n, b[i]);
        if(it < a + n)
            cout<< *it<< " ";
        else 
            cout<< '_'<< ' ';
    }
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