#include <iostream>
#include <algorithm>
using namespace std;

typedef pair<int,int> ii;
typedef pair<int, ii> Edge;


int m, n, parents[200000+5], tcost, lcost;
Edge edges[200000+5];

void setParents()
{
	for(int i = 0; i <= m; i++)
		parents[i] = i;
}

int find(int a)
{
	return (parents[a]==a? a: parents[a]=find(parents[a]));
}

void kruskal()
{
	int x,y;
	setParents();

	for(int i = 0; i < n; i++)
	{
		x = find(edges[i].second.first);
		y = find(edges[i].second.second);


		if(x != y)
		{
			parents[y] = x;
			lcost+=edges[i].first;
		}
	}				
}

int main()
{
	int u,v,w;	

	while(cin>>m>>n, m || n)
	{
		Edge aux;
		tcost = 0;
		lcost = 0;

		for(int i = 0; i < n; i++)
		{
			cin>>u>>v>>w;
			aux.second.first = u;
			aux.second.second = v;
			aux.first = w;
			tcost+=w;
			edges[i] = aux;
		}		

		sort(edges, edges+n);
		kruskal();
		cout<<tcost-lcost<<endl;
	}	

	return 0;
}