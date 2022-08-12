#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double x, y;

    cin>>x>>y;

    y--;

    if(y < 1)
    {
        if(x == 0)
            cout<<"ALL GOOD"<<endl;
        else
            cout<<"IMPOSSIBLE"<<endl;
    }
    else
    {
        cout<<fixed<<setprecision(6)<<-(x/y)<<endl;
    }

    return 0;
}