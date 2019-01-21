#include <iostream>
#include <cstring>
#include <stack>

using namespace std;

int visited[105];

bool dfs(int graph[105][105], int n, int s, int t)
{
	
	visited[s] = 1;

	if(s == t)
		return true;

	if(n == 0)
		return false;

	for(int i = 0; i < n; i++)
	{
		if(visited[i] != 1 && graph[n][i] > 0 )
			dfs(graph, n--, i, t);
		
	}

	


	return true;
}

int main()
{
	int n, s, t, c, max_flow;
	int graph[105][105];

	int from, to, cost;

	while(cin>>n, n!=0)
	{

		cin>>s>>t>>c;

		for(int i = 0; i < c; i++)
		{
			cin>>from>>to>>cost;
			graph[to][from] = cost;
		}

			cout<<"DFS?"<<endl;
			cout<<dfs(graph, n, s, t)<<endl;



	}

	return 0;
}