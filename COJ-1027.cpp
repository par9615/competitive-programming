#include <iostream>
#include <vector>
#include <climits>
using namespace std;



typedef struct edge
{
	int v;
	double r, d;

}edge;

typedef vector<vector<edge>> AdjacencyList; 

AdjacencyList list(100+10);

edge make_edge(int v, int r, int d)
{
	edge res;
	res.v = v;
	res.r = r;
	res.d = d;

	return res;
}

int main()
{
	int n, e, u, v, x, y;
	double r, d; 

	while(cin>>n>>e)
	{
		cin>>u>>v;

		for(int i = 0; i < e; i++)
		{
			cin>>x>>y>>r>>d;
			list[x].push_back(make_edge(y,r,d));
			cout<<list[x][0].v<<endl;

		}

	}



	return 0;
}