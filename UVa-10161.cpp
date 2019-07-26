#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x, y, n, r, p;

    while(cin>>n, n)
    {
        x = y = 0;
        r = sqrt(n);
        p = r*r;

        if(r & 1)
        {
            y = r-1;
            if(n > p && n <= p+r)
                y++, x = n-(p+1);
            else if (n > p+r && n <= (p+2*r))
                y++, x+=r, y -= n-(p+r+1);

        }
        else
        {
            x = r-1;
            if(n > p && n <= p+r)
                x++, y = n-(p+1);
            else if (n > p+r && n <= (p+2*r))
                x++, y+=r, x -= n-(p+r+1);
        }
        
        cout<<(x+1)<<" "<<(y+1)<<endl;
    }

    return 0;
}