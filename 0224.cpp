#include<bits/stdc++.h>
using namespace std;

int dx[8] = {-1, -1, -1,  0, 0,  1, 1, 1};
int dy[8] = {-1,  0,  1, -1, 1, -1, 0, 1};
int dem = 0;
void Try(int a[][101], int i, int j, int n, int m)
{
    dem++;
    a[i][j] = 0;
    for(int k = 0; k < 8; k++)
    {
        int i1 = i + dx[k], j1 = j + dy[k];
        if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m && a[i1][j1] == 1)
            Try(a, i1, j1, n, m);
    }
}

int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int n, m; 
        cin>> n>> m;
        int a[101][101];
        for(int i = 1; i <= n; i++)
            for(int j = 1; j <= m; j++)
                cin>> a[i][j];
        int cnt = 0;
        for(int i = 1; i <= n; i++)
            for(int j = 1; j <= m; j++)
                if(a[i][j] == 1)
                {
                    dem = 0;
                    Try(a, i, j, n, m);
                    if(dem != 0)
                        cnt++;
                }
        cout<< cnt<< endl;
    }
}