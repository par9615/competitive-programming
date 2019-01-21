#include <iostream>
#include <cstring>
#include <math.h>
using namespace std;
typedef long long ll;

ll d[10], fact[14], o[14];
int len, sum;

void factorial()
{
    fact[0] = 1;
    fact[1] = 1;

    for(int i = 2; i < 14; i++)
        fact[i] = fact[i-1] * i;
}

void countDigits(ll m)
{
    sum = 0;
    while(m)
    {
        int x = m%10;
        d[x]++;
        m/=10;
        len++;
        sum += x;
    }
}

void ones()
{
    o[0] = 0;
    o[1] = 1;

    for(int i = 2; i < 14; i++)
        o[i] = (o[i-1]*10) + 1;
}

ll r()
{
    return fact[d[0]] * fact[d[1]] * fact[d[2]] * fact[d[3]] * fact[d[4]] * fact[d[5]] *
            fact[d[6]] * fact[d[7]] * fact[d[8]] * fact[d[9]];
}

int main()
{
    ll m, a, b;
    factorial();
    ones();

    while(cin>>m, m)
    {
        memset(d, 0, sizeof(d));
        len = 0;
        b = 0;

        countDigits(m);

        a = sum * (fact[len-1]) * o[len] / r();

        if(d[0]>0)
        {
            d[0]--;
            b = sum * (fact[len-2]) * o[len-1] / r();
        }


        cout<<a-b<<endl;
    } 

    return 0;

}
