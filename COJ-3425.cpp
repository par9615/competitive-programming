#include <iostream>
#include <map>

using namespace std;

int main()
{
	int t, k, ans;
	map<string, int> m;
	string a, b;

	cin>>t;

	while(t--)
	{
		cin>>k;
		m.clear();
		ans = 1;

		for(int i = 0; i < k; i++)
		{
			cin>>a>>b;

			if(m[b] == 0)
				m[b] = 1;
			else
				m[b]++;
		}

		for(auto a: m)
			ans*=(a.second+1);

		cout<<ans-1<<endl;
	}	
	return 0;
}