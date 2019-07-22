#include <iostream>
using namespace std;

bool can_split(long long n, long long k)
{
    int slice = 0;

    for(int i = 0; i < k; i++)
    {
        slice = n/k;
        n-=slice;
        n--;
    }

    return (n == k);
}

int main()
{
    long long n;
    long long ans;
    while(cin>>n, n > 0)
    {
        ans = -1;

        for(int i = n-1; i > 0; i--)
        {
            if(i&1)
                if(can_split(n, i))
                {
                    cout<<i<<" people"<<endl;
                    break;
                }
                
            
        }        


    }

    return 0;
}