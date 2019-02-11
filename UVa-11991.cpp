#include <iostream>
#include <vector>

using namespace std;


int main() {
	
	int n, m, k, v, x, a, b;
	
	while(cin>>n>>m)
	{
	    vector<vector<int> > list(1000000+5);
	        
	    for(int i = 0; i < n; i++)
	    {
	        cin>>x;
	        list[x].push_back(i+1);
	    }
	    
	    for(int i = 0; i < m; i++)
	    {
	        cin>>a>>b;
	        
	        if(a > list[b].size())
	            cout<<0<<endl;
	        else
	            cout<<list[b][a-1]<<endl;
	    }
	}
	
	return 0;
}
