#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

#define SIZE 100000005

bool primes[SIZE+5];
int n, a[100+5][100+5];
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};
vector<int> uv, nuv;

void sieve(int n)
{
    int m = sqrt(n);
    primes[0] = 0, primes[1] = 0;

    for(int i = 2; i < m; i++)
        if(primes[i])
            for(int j = i*i; j < n; j+=i)
                primes[j] = 0;        
     
}

bool valid(int i, int j)
{
    return (i < n && i >= 0 && j < n && j >= 0);
}

int prime_flood(int i, int j)
{
    if(a[i][j] == -1)
        return 0;
    
    int res = 1;
    a[i][j] = -1;
    for(int k = 0; k < 4; k++)
        if(valid(i+dy[k], j+dx[k]) && primes[a[i+dy[k]][j+dx[k]]])
            res += prime_flood(i+dy[k], j+dx[k]);

    return res;
}

int normal_flood(int i, int j)
{   
    if(a[i][j] == -1)
        return 0;
    
    int res = 1;
    a[i][j] = -1;
    for(int k = 0; k < 4; k++)
        if(valid(i+dy[k], j+dx[k]) && !primes[a[i+dy[k]][j+dx[k]]])
            res += normal_flood(i+dy[k], j+dx[k]);

    return res;

}

int main()
{
    for(int i = 0; i < SIZE; i++)
        primes[i] = 1;
    sieve(SIZE);

    int c = 1;
    while(cin>>n, n > 0)
    {
        uv.clear();
        nuv.clear();

        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                cin>>a[i][j];

           for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
            {
                if(a[i][j] != -1 && primes[a[i][j]])
                {
                    //cout<<"PRIME "<<i<<" "<<j<<endl;
                    uv.push_back(prime_flood(i, j));
                }
                else if(a[i][j] != -1 && !primes[a[i][j]])
                {
                    //cout<<"NORMAL "<<i<<" "<<j<<endl;
                    nuv.push_back(normal_flood(i, j));
                }
            }
      

        sort(uv.begin(), uv.end());
        
        int uv_size = uv.size();
        int nuv_size = nuv.size();
        
        if(c != 1)
            cout<<endl;

        cout<<"Area "<<c<<":"<<endl;
        cout<<uv_size<<" unique vegetation regions:";
        for(int i = 0; i < uv_size; i++)
            cout<<" "<<uv[i];
        cout<<endl;

        cout<<nuv_size<<" non-unique vegetation regions"<<endl;
        
        c++;
        /* cout<<"UVR "<<prime_flood(0, 0)<<endl;
        cout<<" 3 prime? "<<primes[3]<<endl;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
                cout<<a[i][j]<<" ";
            cout<<endl;
        }*/
        
    }      

    return 0;
}
