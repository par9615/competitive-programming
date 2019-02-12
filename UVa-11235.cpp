#include <iostream>
#include <map>
using namespace std;

int st[(100000+5)*2];
int a[100000+5];

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
    if(L == R)
        st[p] = L;
    else
    {
        build(L, (L+R)/2, left(p));
        build((L+R)/2+1, R, right(p));
        int p1 = st[left(p)];
        int p2 = st[right(p)];
        st[p] = (a[p1] >= a[p2])? p1 : p2;
    }
}

int main()
{
    int n, q;

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
                    a[j++] = f;
            }                    
        }

        

    }
    
    return 0;
}