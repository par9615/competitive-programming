#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
using namespace std;

#define size 1000+10
typedef pair<int, int> ii;
typedef pair<int, ii> iii;

struct comparator
{
	bool operator()(iii a, iii b)
	{
		return a.first > b.first;
	}
}comparator;

int n, e, parent[size], ans;
vector<iii> edges(100000+10);

void setParents()
{
	for(int i = 0; i <= n; i++)
		parent[i] = i;
}

int find(int i)
{
	return (parent[i]==i? i : parent[i]=find(parent[i]));
}

void kruskal()
{
	setParents();

	for(int i = 0; i < e; i++)
	{
		int x = find(edges[i].second.first);
		int y = find(edges[i].second.second);

		if(x != y)
		{
			ans = min(ans, edges[i].first);
			parent[x] = y;
			n--;
		}
	}
}


int main()
{
	iii aux;
	int u, v, w;
	while(cin>>n>>e, n||e)
	{
		edges.clear();
		ans = INT_MAX;
		for(int i = 0; i < e; i++)
		{
			cin>>u>>v>>w;
			aux.first = w;
			aux.second.first = u;
			aux.second.second = v;
			edges.push_back(aux);
		}

		std::sort(edges.begin(), edges.begin()+e, comparator);
		kruskal();
		if(n != 1)
			cout<<"IMPOSSIBLE"<<endl;
		else
			cout<<ans<<endl;	
	}

	return 0;
}