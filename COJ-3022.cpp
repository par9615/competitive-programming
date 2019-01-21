#include <iostream>
#include <vector>
#include <utility>
#include <cmath>
#include <climits>
#include <queue>
#include <cstring>

using namespace std;

typedef pair<double, double> dd;
typedef vector<dd> vdd;

#define V 210

double dist(double x1, double y1, double x2, double y2)
{
	return sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
}

bool bfs(int rGraph[V][V], int s, int t, int parent[])
{
    bool visited[V];
    memset(visited, 0, sizeof(visited));
 
    queue <int> q;
    q.push(s);
    visited[s] = true;
    parent[s] = -1;
 
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
 
        for (int v=0; v<V; v++)
        {
            if (visited[v]==false && rGraph[u][v] > 0)
            {
                q.push(v);
                parent[v] = u;
                visited[v] = true;
            }
        }
    }
 
    return (visited[t] == true);
}

int fordFulkerson(int graph[V][V], int s, int t)
{
    int u, v;
 
    // Create a residual graph and fill the residual graph with
    // given capacities in the original graph as residual capacities
    // in residual graph
    int rGraph[V][V]; // Residual graph where rGraph[i][j] indicates 
                     // residual capacity of edge from i to j (if there
                     // is an edge. If rGraph[i][j] is 0, then there is not)  
    for (u = 0; u < V; u++)
        for (v = 0; v < V; v++)
             rGraph[u][v] = graph[u][v];
 
    int parent[V];  // This array is filled by BFS and to store path
 
    int max_flow = 0;  // There is no flow initially
 
    // Augment the flow while tere is path from source to sink
    while (bfs(rGraph, s, t, parent))
    {
        // Find minimum residual capacity of the edges along the
        // path filled by BFS. Or we can say find the maximum flow
        // through the path found.
        int path_flow = INT_MAX;
        for (v=t; v!=s; v=parent[v])
        {
            u = parent[v];
            path_flow = min(path_flow, rGraph[u][v]);
        }
 
        // update residual capacities of the edges and reverse edges
        // along the path
        for (v=t; v != s; v=parent[v])
        {
            u = parent[v];
            rGraph[u][v] -= path_flow;
            rGraph[v][u] += path_flow;
        }
 
        // Add path flow to overall flow
        max_flow += path_flow;
    }
 
    // Return the overall flow
    return max_flow;
}

int main()
{
	
	int n, m, s, v;
	int matrix[V][V];
	int i,j;
	vdd gpos(V), hpos(V);
	double x, y, run_dist;	//gopher pos, hole pos, gopher runned dist

	while(cin>>n>>m>>s>>v)
	{
		run_dist = s*v;

		for(int i=1; i <= n; i++)
		{
			cin>>x>>y;
			matrix[0][i] = 1;
			gpos[i] = make_pair(x,y);
		}

		for(int j=n+1; j <= n+m; j++)
		{
			cin>>x>>y;	
			matrix[j][n+m+1] = 1;

			for(int i=1; i<=n; i++)
			{
				if(run_dist > dist(x, y, gpos[i].first, gpos[i].second))
					matrix[i][j] = 1;
			}
		}

		/*for(int i = 0; i < n+m+2; i++)
		{
			for(int j = 0; j < n+m+2; j++)
			{
				cout<<matrix[i][j];
			}
			cout<<endl;
		}*/

		
		cout<<n-fordFulkerson(matrix,0,n+m+1)<<endl;
	}

	return 0;
}