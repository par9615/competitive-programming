#include <iostream>
#include <cstring>
using namespace std;

int n, minSum, a[8], b[8], perm[8], used[8];

void permutation(int pos)
{
    if(pos == n)
    {
        int sum = 0;
        for(int i = 0; i < n; i++)
            sum += a[perm[i]]*b[i];
        
        minSum = min(minSum, sum);
    }

    for(int i = 0; i < n; i++)
    {
        if(!used[i])
        {
            used[i] = 1;
            perm[pos] = i;
            permutation(pos+1);
            perm[pos] = 0;
            used[i] = 0;
        }
    }
}

int main()
{
    cin>>n;

    memset(used, 0, sizeof(used));
    minSum = 99999999;

    for(int i = 0; i < n; i++)
        cin>>a[i];
    for(int i = 0; i < n; i++)
        cin>>b[i];
    
    permutation(0);

    cout<<minSum<<endl;

    return 0;
}