#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef pair<int,int> ii;
typedef pair<int, ii> iii;

int n, m, ans, parent[1000+5];

void setParents()
{
	for(int i = 0; i <= n; i++)
		parent[i] = i;
}

int find(int i)
{
	return (parent[i] == i? i : parent[i] = find(parent[i]));
}

void union_(int u, int v)
{
	int x = find(u);
	int y = find(v);
	if(x != y)
	{
		parent[x] = y;
		ans++;
	}
}

int main()
{
	int t, u, v;
	cin>>t;

	while(t--)
	{
		ans = 0;		
		cin>>n>>m;
		setParents();
		for(int i = 0; i < m; i++)
		{
			cin>>u>>v;
			union_(u, v);
		}	

		cout<<ans<<endl;
	}
	return 0;
}