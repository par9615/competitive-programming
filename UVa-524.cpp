#include <iostream>
#include <string.h>
using namespace std;
int p[]={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41};
int a[20], v[20], n;

bool isPrime(int x)
{
    for(int i = 0; i < 13; i++)
        if(x == p[i])
            return true;
    
    return false;
}

bool isRingPrime()
{
   if(!isPrime(a[0]+a[n-1]))
        return false;
        
   for(int i = 1; i < n; i++)
       if(!isPrime(a[i]+a[i-1]))
            return false;
            
    return true;
}

void backtrack(int level)
{
    if(level == n)
    {
        if(isPrime(a[n-1]+1))
        {
            cout<<a[0];
            for(int i = 1; i < n; i++)
                cout<<" "<<a[i];
            cout<<endl;
        }
    }
    
    for(int i = 2; i <= n; i++)
        {
            
            if(!v[i] && isPrime(a[level-1] + i))
            {
                a[level] = i;
                v[i] = 1;
                backtrack(level+1);
                v[i] = 0;
            }
        }
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int c = 0;
    
    a[0] = 1;
    
    while(cin>>n)
    {
        memset(v, 0, sizeof(v));
        
        if(c!=0)
            cout<<endl;
        
        cout<<"Case "<<++c<<":"<<endl;
        backtrack(1);
    }
    
    return 0;
}
