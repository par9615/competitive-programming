#include <iostream>
#include <string.h>
using namespace std;

#define SIZE 205

int n, e, G[SIZE][SIZE];
bool visited[SIZE], color[SIZE];

bool isBipartite(int u)
{
    for(int j = 0; j < n; j++)
    {
     
        if(G[u][j])
        {
            if(!visited[j])
            {
                visited[j] = true;
                color[j] = !color[u];
                
                if(!isBipartite(j))
                    return false;
            }
            
             else if(color[u] == color[j])
                return false;
            
        }
    }
    
    return true;
}

int main() {
    
    while(cin>>n, n)
    {
        memset(visited, 0, sizeof(visited));
        memset(G, 0, sizeof(G[0][0])*SIZE*SIZE);
        memset(color, 0, sizeof(color));
        
        cin>>e;
        int u, v;
        for(int i = 0; i < e; i++)
        {
            cin>>u>>v;
            G[u][v] = 1;
            G[v][u] = 1;
        }
        
        visited[0] = 1;
        color[0] = 1;
        
        if(isBipartite(0))
            cout<<"BICOLORABLE."<<endl;
        else
            cout<<"NOT BICOLORABLE."<<endl;
      
    }
    
    return 0;
}
