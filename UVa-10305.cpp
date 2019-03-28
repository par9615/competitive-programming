#include <iostream>
#include <stack>
#include <string.h>
using namespace std;

//the judge test cases aren't intensive because the graph(G) wasn't cleared and the programm passed the test cases

stack<int> ts;
int n, m, G[105][105], visited[105];

void dfs(int u)
{
    visited[u] = 1;
    
    for(int i = 1; i <= n; i++)
        if(G[u][i] && !visited[i])
            dfs(i);
    
    ts.push(u);
}


void topological_sort()
{
    memset(G, 0, sizeof(int)*105*105);
    memset(visited, 0, sizeof(visited));
    
    for(int i = 1; i <= n; i++)
        if(!visited[i])
            dfs(i);
    
    cout<<ts.top();
    ts.pop();
    while(!ts.empty())
    {
        cout<<" "<<ts.top();
        ts.pop();
    }
    
    cout<<endl;
}


int main()
{
    while(cin>>n>>m, n || m)
    {
        int u, v;
        for(int i = 0; i < m; i++)
        {
            cin>>u>>v;
            G[u][v] = 1;
        }
        
        topological_sort();
    }

    return 0;
}
