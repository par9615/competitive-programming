#include <iostream>
#include <map>
#include <string.h>
using namespace std;

int p[100000+5], r[100000+5];

int find(int x)
{
    return (p[x]==x? x: p[x]=find(p[x]));
}

void _union(int x, int y)
{
    int fx = find(x);
    int fy = find(y);
    
    if(fx != fy)
    {
        p[fy] = fx;
        r[fx] += r[fy];
        cout<<r[fx]<<endl;
    }
    else
        cout<<r[fx]<<endl;
}


int main() 
{
    int t, f, number;
    string a, b;
    map<string, int> names;
    
    cin>>t;
    while(t--)
    {
        number = 0;
        names.clear();
        memset(p, 0, sizeof(p));
        memset(r, 0, sizeof(r));
        
        cin>>f;
        
        for(int i = 0; i < f; i++)
        {
            cin>>a>>b;
            
            if(names[a] == 0)
                names[a] = ++number, r[number] = 1, p[number] = number;
            if(names[b] == 0)
                names[b] = ++number, r[number] = 1, p[number] = number;
                
            _union(names[a], names[b]);
        }
    }
    
    return 0;
}
