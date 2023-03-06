#include<bits/stdc++.h>
using namespace std;
// lower_bound va upper_bound duoc su dung cho mang da duoc sap xep
//lower_bound(iter1, iter2, key)    
// [iter1, iter2)
// tra ve vi tri cua phan tu dau tien >= key


void testCase()
{
    int n, k;
    cin>> n>> k;
    int *a = new int[n];
    for(int i = 0; i < n; i++)
        cin>> a[i];
    long long dem = 0; 
    sort(a, a + n);
    for(int i = 0; i < n - 1; i++)
    {
        int x = upper_bound(a, a + n, a[i] + k - 1) - a;
        dem += x - i - 1;
    }
    cout<< dem;
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