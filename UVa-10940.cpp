#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, p;

    while(cin>>n, n)
    {
        if((n != 0) && (n & (n-1) == 0))
        {
            cout<<n<<endl;
        }
        else
        {
            p = pow(2, ceil(log2(n)));

            cout<<2*n-p<<endl;
        }
    }    

    return 0;
}