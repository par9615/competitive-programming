#include <iostream>
#include <cmath>
using namespace std;


bool is_black(int x, int y)
{
    return (x%2 == y%2);
}

bool is_inbounds(int x, int y)
{
    return (x >= 0 && x < 8 && y >=0 && y < 8);
}

bool are_collinear(int a, int b, int c, int d)
{
    if(a == c || b == d)
        return false;

    double slope = (double(d-b)/double(c-a));

    // cout<<"SLOPE "<<slope<<endl;
    if(slope == 1 || slope == -1)
        return true;

    return false;
}

void diag_intersections(int a, int b, int c, int d)
{
    int AD1 = a+b;
    int CB1 = -a+b;

    int AD2 = c+d;
    int CB2 = -c+d;

    int X1 = (AD1-CB2)/2;
    int X2 = (AD2-CB1)/2;

    int Y1 = (CB2+X1);
    int Y2 = (CB1+X2);

    // cout<<"AD1 "<<AD1<<endl;
    // cout<<"CB1 "<<CB1<<endl;

    // cout<<"AD2 "<<AD2<<endl;
    // cout<<"CB2 "<<CB2<<endl;

    // cout<<"X1 "<<X1<<endl;
    // cout<<"X2 "<<X2<<endl;

    cout<<2<<" "<<char(a+'A')<<" "<<b+1<<" ";
    if(is_inbounds(X1, Y1))
        cout<<char(X1+'A')<<" "<<Y1+1<<" ";
    else
        cout<<char(X2+'A')<<" "<<Y2+1<<" ";
    cout<<char(c+'A')<<" "<<d+1<<endl;
}

int main()
{
    int t;

    cin>>t;

    while(t--)
    {
        int a, b, c, d, res;
        char ca, cc;

        cin>>ca>>b>>cc>>d;

        a = ca-'A';
        b--;
        c = cc-'A';
        d--;

        //check if are in different color
        if(is_black(a, b) != is_black(c, d))
            cout<<"Impossible"<<endl;

        //check if is in the same square
        else if(a == c && b == d)
            cout<<0<<" "<<char(a+'A')<<" "<<b+1<<endl;

        //check if are collinear
        else if(are_collinear(a, b, c, d))
            cout<<1<<" "<<char(a+'A')<<" "<<b+1<<" "<<char(c+'A')<<" "<<d+1<<endl;

        //check intersections of both diagonals
        else
            diag_intersections(a, b, c, d);

    }

    return 0;
}