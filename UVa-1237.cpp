#include <iostream>
#include <vector>

using namespace std;
typedef pair<int, int> ii;
typedef pair<ii, string> iis;

int main() {
	vector<iis> makers;
	int p, q, t;
	
	cin>>t;
	
	while(t--)
	{
	    makers.clear();
	    cin>>p;
	    
	    string s;
	    int a, b;
	    for(int i = 0; i < p; i++)
	    {
	        cin>>s>>a>>b;
	        makers.push_back(iis(ii(a,b), s));
	    }
	    
	    cin>>q;
	    int x;
	    for(int i = 0; i < q; i++)
	    {
	        cin>>x;
	        int  c = 0;
	        string ans;
	        for(auto e: makers)
	        {
	            if(x >= e.first.first && x <= e.first.second)
	                c++, ans = e.second;
	        }
	        
	        if(c == 0 || c > 1)
	            cout<<"UNDETERMINED"<<endl;
	        else
	            cout<<ans<<endl;
	            
	      
	    }
	      if(t>0)
	            cout<<endl;
	    
	}
	
	
}
