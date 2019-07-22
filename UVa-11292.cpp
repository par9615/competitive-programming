#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int ans, n, m, h[20000+5], k[20000+5];
	
	while(cin>>n>>m, n || m)
	{
	    ans = 0;
	    for(int i = 0; i < n; i++)
	        cin>>h[i];
	    
	    for(int i = 0; i < m; i++)
	        cin>>k[i];
	    
	    sort(h, h+n);
	    sort(k, k+m);
	    
	    int i = 0, j = 0;
	    
	    while(i < m && j < n)
	    {
	        if(k[i] >= h[j])
	            ans+=k[i], i++, j++;
	        else
	            i++;
	    }
	    
	    if(j != n)
	        cout<<"Loowater is doomed!"<<endl;
	    else
	        cout<<ans<<endl;
	    
	    
	}
	
	return 0;
	
}
