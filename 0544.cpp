#include<bits/stdc++.h>
using namespace std;
#define PI 3.141592653589793238
#define db double

struct diem
{
    db x, y;
};

void nhap(diem &a)
{
    cin>> a.x>> a.y;
}
void in(diem b)
{
    cout<< b.x<< ' '<< b.y<<' ';

}
db doDai(diem a, diem b)
{
    return sqrt(pow(a.x - b.x, 2) + pow( a.y - b.y, 2));
}



void testCase()
{
    diem A, B, C;
    nhap(A);
    nhap(B);
    nhap(C);
    db a = doDai(B, C);
    db b = doDai(A, C);
    db c = doDai(A, B);
    // cout<< a<< ' '<< b<< ' ' << c<< ' ' ;
    if(a + b <= c || a + c <= b || b + c <= a)
    {
        cout<< "INVALID";
        return;
    }
    db S = sqrt((a + b + c) * (a + b - c) * (a + c - b) * (b + c - a)) / 4;
    db R = a * b * c / 4 / S;
    cout<< fixed<< setprecision(3)<< R * R * PI;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>> t;
    while(t--)
    {
        testCase();
        cout<< endl;
    }
    return 0;
}