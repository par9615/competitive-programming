#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>

using namespace std;

typedef pair<int,int> ii;
typedef pair<int, ii> iii;


int n, m;
bool visited[1000+10], G[1000+10][1000+10];
vector<iii> edges(2500+10);
vector<int> ans;

void DFS(int u)
{
	visited[u] = 1;
	for(int v = 0; v < n; v++)
		if(G[u][v] && !visited[v])
			DFS(v);
}

bool isConnected()
{
	memset(visited, 0, sizeof(visited));
	DFS(0);
	for(int i = 0; i < n; i++)
		if(!visited[i])
			return false;
	return true;
}

void reverseDelete()
{
	int u, v, w;
	for(int i = m-1; i >= 0; i--)
	{
		u = edges[i].second.first;
		v = edges[i].second.second;
		w = edges[i].first;
		if(G[u][v])
		{
			G[u][v] = 0;
			if(isConnected())
				ans.push_back(w);
			else
				G[u][v] = 1;
		}
	}
}

int main()
{
	int u, v, w;
	iii e;

	while(cin>>n>>m, n || m)
	{
		memset(G, 0, sizeof(G));
		edges.clear();
		ans.clear();
		for(int i = 0; i < m; i++)
		{
			cin>>u>>v>>w;
			e.first = w;
			e.second.first = u;
			e.second.second = v;
			edges.push_back(e);
			G[u][v] = 1;
		}

		sort(edges.begin(), edges.begin()+m);
		reverseDelete();
		if(ans.size() == 0)
			cout<<"forest"<<endl;
		else
		{
			sort(ans.begin(), ans.end());
			cout<<ans[0];
			for(int i = 1; i < ans.size(); i++)
				cout<<" "<<ans[i];
			cout<<endl;
		}
	}
	return 0;
}