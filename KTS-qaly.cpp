#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    float a, b, res;

    cin>>n;

    while(n--)
    {
        cin>>a>>b;
        res += a*b;
    }

    cout<<fixed<<setprecision(3)<<res<<endl;

    return 0;
}