#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t, a, n, ans;
    
    cin>>t;
    
    for(int k = 0; k < t; k++)
    {
        cin>>a>>n;
        
        ans = 0;
        
        for(int i = 2; i * (i+1) / 2 <= n; i++)
        {
            if( (n-(i*(i+1))/2) % i == 0)
                ans++;
        }
        
        cout<<k+1<<" "<<ans<<endl;
    }
    
}
