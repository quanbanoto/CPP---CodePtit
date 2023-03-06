#include<bits/stdc++.h>
using namespace std;

void Input_Array(int a[], int n)
{
    for(int i = 0; i < n; i++)
        cin>> a[i];
}

void Res(int a[], int n)
{
    int Min = INT_MAX;
    for(int i = 0; i < n; i++)
        for(int j = i + 1; j < n; j++)
            if( abs(a[i] + a[j]) < abs(Min))
                Min = a[i] + a[j];
    cout<< Min<< endl;

}
int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int n;
        cin>> n;
        int a[n];
        Input_Array(a, n);
        Res(a, n);
    }
    return 0;
}