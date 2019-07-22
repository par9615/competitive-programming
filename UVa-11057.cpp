#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int binary(int x, int a[], int l, int r)
{
    if(l<=r)
    {
        int m = (l+r)/2;

        if(a[m] == x)
            return m;
        
        if(x < a[m])
            return binary(x, a, l, m-1);
        else
            return binary(x, a, m+1, r);
    }
    else
        return -1;
}

int main()
{
    int n, m, a[10000+5], b1, b2, diff;

    while(cin>>n)
    {
        for(int i = 0; i < n; i++)
            cin>>a[i];
        cin>>m;

        diff = 9999999;

        sort(a, a+n);

        for(int i = 0; i < n-1; i++)
        {
            int s, p;
            p = m-a[i];
            s = binary(p, a, 0, n-1);

            if(s != -1)
            {
                if(abs(a[i]-p)<diff)
                {
                    b1=a[i];
                    b2=p;
                    diff=abs(a[i]-p);
                }
            }
        }

        cout<<"Peter should buy books whose prices are "<<b1<<" and "<<b2<<"."<<endl<<endl;
    }

    return 0;
}
