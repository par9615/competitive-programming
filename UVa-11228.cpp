#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

typedef pair<int,int> ii;
typedef pair<double,ii> dii;

int n, r, states, parent[1005], cities[1005][2];
double roads, rails;
vector<dii> edges;

int find(int a)
{
	return (parent[a]==a? a : parent[a] = find(parent[a])); //path compression papu
}

void setParents()
{
	for(int i = 0; i <= n; i++)
		parent[i] = i;
}

void kruskal()
{
	int x, y;
	setParents();
	states = n;
	roads = 0;
	rails = 0;
	for(auto i: edges)
	{
		x = find(i.second.first);
		y = find(i.second.second);

		if(x != y)
		{
			parent[y] = x;
			if(i.first <= r)
			{				
				states--;
				roads+=i.first;
			}
			else
				rails+=i.first;
		}	
	}

	cout<<states<<" "<<round(roads)<<" "<<round(rails)<<endl;
}


int main()
{
	int t, x, y;
	dii edge;

	cin>>t;
	for(int i = 0; i < t; i++)
	{
		cin>>n>>r;
		for(int j = 0; j < n; j++)
			cin>>cities[j][0]>>cities[j][1];

		edges.clear();
		for(int u = 0; u < n; u++)
		{
			for(int v = u+1; v < n; v++)
			{
				edge.second.first = u;
				edge.second.second = v;
				edge.first = sqrt(pow(cities[u][0]-cities[v][0], 2) + pow(cities[u][1]-cities[v][1], 2));
				edges.push_back(edge);	
			}
		}

		sort(edges.begin(), edges.end());
		cout<<"Case #"<<i+1<<": ";
		kruskal();
	}

	return 0;
}