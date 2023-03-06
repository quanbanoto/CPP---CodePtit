#include<bits/stdc++.h>
using namespace std;

struct ThiSinh
{
    string Name;
    string BirthDay;
    float score1, score2, score3;
};

void nhap(ThiSinh &ts)
{
    getline(cin, ts.Name);
    cin>> ts.BirthDay;
    cin>> ts.score1>> ts.score2>> ts.score3;
}

void in(ThiSinh &ts)
{
    cout<< ts.Name<<' ' << ts.BirthDay<< ' ';
    printf("%.1f", (float)(ts.score1 + ts.score2 + ts.score3));
}

int main()
{
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}