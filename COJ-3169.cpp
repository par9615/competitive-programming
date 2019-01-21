#include<iostream>
#include<cstring>
using namespace std;

int matrix[100+5][100+5], visited[100+5], steps;

void dfs(int from, int to, int p)
{
	visited[from] = 1;
	if(from == to)
	{
			steps+=p;
			return;
	}
	
	for(int v = 0; v < 100; v++)
	{
		if(matrix[from][v] && !visited[v])
		{
			dfs(v, to, p+1);
		}
	}
}


int main()
{
	int n, k, u, v, c, f;
	
	cin>>n>>k;
	
	for(int i = 0; i < k; i++)
		cin>>u>>v, matrix[u][v]=1;
	
	cin>>c>>f;
	
	dfs(0,c,0);
	memset(visited, 0, sizeof(visited));
	dfs(0,f,0);
	cout<<steps<<endl;
	return 0;	
}