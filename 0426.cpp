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
        int a[n];
        for(int i = 0; i < n; i++)
            cin>> a[i];
        sort(a, a + n);
        int j = n - 1, i = 0;
        while(j >= n / 2 && i < n / 2)
    	{
    		cout<< a[j] << ' '<< a[i]<< ' ';
    		i++;
    		j--;
		}
        if(n % 2 == 1)
            cout<< a[i];
        cout<< endl;
    }
    return 0;
}
