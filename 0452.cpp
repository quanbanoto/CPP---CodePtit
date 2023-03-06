#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
    {
        int m, n, p;
        cin>> m>> n>> p;
        ll a1[m], a2[n], a3[p];
        for(int i = 0; i < m; i++)  cin>> a1[i];
        for(int i = 0; i < n; i++)  cin>> a2[i];
        for(int i = 0; i < p; i++)  cin>> a3[i];
        int i = 0, j = 0, h = 0;
        vector<ll> a;
        while(i < m && j < n && h < p)
        {
            if(a1[i] == a2[j] && a2[j] == a3[h])
            {
                a.push_back(a1[i]);
                i++;
                j++; 
                h++;
            }
            else if(a1[i] < a2[j])   i++;
            else if(a2[j] < a3[h])   j++;
            else h++;
        }
        sort(a.begin(), a.end());
        if(a.size() == 0)
            cout<< - 1<< endl;

        else 
        {
            for(auto x : a)
                cout<< x<< ' ';
            cout<< endl;
        }
	}
    return 0;
}