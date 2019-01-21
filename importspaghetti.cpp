#include <iostream>
#include <cstring>
#include <map>
#include <vector>
#include <queue>
#include <climits>
using namespace std;

#define maxsize 500+10

map<string, int> files;
string indexes[maxsize];
int n, G[maxsize][maxsize], visited[maxsize], parent[maxsize][maxsize], shortest = 1000000000, ans = -1; //0 unvisited, 1 visited
vector<string> res;

vector<string> tokenize(string s)
{
	string aux = "";
	vector<string> res;
	for(auto e: s)
	{
		if(e != ',' && e != ' ')
			aux += e;
		else if(e  == ' ')
			continue;
		else
		{
			res.push_back(aux);
			aux="";
		}	
	}
	res.push_back(aux);	
	return res;
}

void init_parents()
{
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			parent[i][j] = i;
}


void floyd()
{
	init_parents();

	for(int k = 0; k < n; k++)
		for(int i = 0; i < n; i++)
			for(int j = 0; j < n; j++)
				if(G[i][k] + G[k][j] < G[i][j])
				{
					G[i][j] = G[i][k] + G[k][j];
					parent[i][j] = parent[k][j];
				}		
}

void print_matrix()
{

	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
			cout<<parent[i][j]<<" ";
		cout<<endl;
	}
	cout<<endl;
}

void print_path(int i, int j)
{
	if(i != j) print_path(i, parent[i][j]);
	res.push_back(indexes[j]);
}

int main()
{
	int k;
	string u, imports;
	
	cin>>n;

	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			G[i][j] = 1000000000;

	for(int i = 0; i < n; i++)
		cin>>u, files[u] = i, indexes[i] = u;


	
	for(int i = 0; i < n; i++)
	{
		cin>>u>>k;
		
		for(int j = 0; j < k; j++)
		{
			cin>>imports;
			getchar();
			getline(cin, imports);
			vector<string> adj = tokenize(imports);
			for(auto v: adj)
				G[files[u]][files[v]] = 1;		

		}	
		
	}

	floyd();
	//rint_matrix();
	for(int i = 0; i < n; i++)
		if(G[i][i] != 1000000000 && G[i][i] < shortest)
			ans = i, shortest = G[i][i];

	if(ans == -1)
		cout<<"SHIP IT"<<endl;
	else
	{
		print_path(ans, parent[ans][ans]);
		int len = res.size();
		cout<<res[0];
		for(int i = 1; i < len; i++)
			cout<<" "<<res[i];
		cout<<endl;
	}		
	
	return 0;
}