#include <iostream>
#include <map>
using namespace std;

int st[(100000+5)*2];
int a[100000+5], fr[100000+5];
int n, q;

int left(int p)
{
    return p<<1;
}

int right(int p)
{
    return (p<<1)+1;
}

void build(int L, int R, int p)
{
}

int query(int L, int R, int i, int j, int p)
{
}

int main()
{

    while(cin>>n, n)
    {
        cin>>q;

        for(int i = 0; i < n; i++)
            cin>>a[i];

        for(int j = 0,i = 1; i <= n; i++)
        {
            if(i == n || a[i] != a[j])
            {
                int f = i-j;
                while(j < i)
                    fr[j++] = f;
            }                    
        }

        build(0, n-1, 1);

        int a, b;
        for(int i = 0; i < q; i++)
        {
            cin>>a>>b;
            cout<<query(0, n-1, a, b, 1)<<endl;
       }


    }
    
    return 0;
}