#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, d, r, h, m[100+5], e[100+5];
    
    while(cin>>n>>d>>r, n || d || r)
    {
        h = 0;
        for(int i = 0; i < n; i++)
            cin>>m[i];
            
        for(int i = 0; i < n; i++)
            cin>>e[i];
        
        sort(m, m+n);
        sort(e, e+n);

        int sum = 0;
        for(int i = 0; i < n; i++)
        {
            sum = m[i] + e[n-1-i];
            if(sum > d)
                h += sum - d;
        }
        
        cout<<h*r<<endl;
    }
    
}
