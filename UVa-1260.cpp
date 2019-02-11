#include <iostream>

using namespace std;

int main() {
	int t, n, a[5000+5];
	cin>>t;
	
	while(t--)
    {
        cin>>n;
        
        for(int i = 0; i < n; i++)
            cin>>a[i];
        
        int ans = 0;
        for(int i = 1; i < n; i++)
            for(int j = i-1; j >= 0; j--)
                if(a[j] <= a[i])
                    ans++;
        
        cout<<ans<<endl;
    }
    
    return 0;
}
