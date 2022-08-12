#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int main()
{
    int t = 1, n, x, minv=INT_MAX, maxv=INT_MIN, range;

    while(cin>>n)
    {
        minv=INT_MAX, maxv=INT_MIN;

        for(int i = 0; i < n; i++)
        {
            cin>>x;
            minv = min(minv, x);
            maxv = max(maxv, x);
        }

        range = maxv - minv;

        cout<<"Case "<<t++<<": "<<minv<<" "<<maxv<<" "<<range<<endl;
    }

    return 0;
}