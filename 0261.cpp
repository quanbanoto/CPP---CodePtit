#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    int a[100][100], b[100][100];

    cin>> n;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j ++)
            cin>> a[i][j];

    cin>> m;
    for(int i = 0; i < m; i++)
        for(int j = 0; j < m; j ++)
            cin>> b[i][j];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout<< a[i][j] * b[i % m][j % m]<< ' ';
        }
        cout<< endl;
    }        
    return 0;
}