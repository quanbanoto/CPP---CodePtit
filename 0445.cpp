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
        int *a = new int[n];
        set<int> s;
        for(int i = 0; i < n; i++)
        {
            cin>> a[i];
            s.insert(a[i]);
        }
        if(s.size() != 1)
        {
            cout<< *s.begin()<< ' ';
            s.erase(*s.begin());
            cout<< *s.begin();
        }

        else 
            cout<< -1;
        cout<< endl;
    }
    return 0;
}