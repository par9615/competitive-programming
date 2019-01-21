#include <stdio.h>
#include <cmath>
using namespace std;

int main()
{
    double h, m;
    double res, hd, md;

    while(scanf("%lf:%lf", &h, &m), h || m)
    {
        hd = 30*h + m/2;
        md = 6*m;

        res = abs(hd - md);

        if(res > 180)
            res = 360 - res;

            printf("%.3f\n", res); 
    }
        
    return 0;
}
