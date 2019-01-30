#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    unsigned int n, a, b;
    int bits, count;

    while(cin>>n, n)
    {
        bits = log2(n)+1;
        a = b = 0;
        count = 0;

        for(int i = 0; i < bits; i++)
        {
            if((1<<i)&n)
            {
                if(!(count&1))
                    a |= (1<<i), count++;
                else
                    b |= (1<<i), count++;
            }
        }
        cout<<a<<" "<<b<<endl;
    }
    return 0;
}