#include <iostream>
#include <queue>
#include <string.h>
using namespace std;

int n, k, G[100+5][100+5], visited[100+5], color[100+5], ans[100+5], maxi;

void coloring(int initc)
{

    memset(visited, 0, sizeof(visited));
    memset(color, 0, sizeof(color));
    
    int res = 0;
    queue<int> q;
    q.push(1); 
    color[1] = initc;

    while(!q.empty())
    {
        int u = q.front();
        q.pop();

        if(!visited[u])
        {
            visited[u] = 1;
            res += color[u];
            for(int i = 1; i <= n; i++)
            {
                if(G[u][i] && !visited[i])
                    q.push(i), color[i] = (color[u]? 0: 1);

            }

        }
    }

    if(res > maxi)
    {
        for(int i = 1; i <=n; i++)
            ans[i] = color[i];
        
        maxi = res;
    }
}

int main()
{
    int m, u, v;
    cin>>m;
    while(m--)
    {
        cin>>n>>k;
        maxi = -1;
        memset(ans, 0, sizeof(ans));
        
        for(int i = 0; i <= n; i++)
            for(int j = 0; j <= n; j++)
                G[i][j] = 0;

        for(int i = 0; i < k; i++)
        {
           cin>>u>>v;
           G[u][v] = 1;
        }

        coloring(0);
        coloring(1);

        cout<<"chale"<<endl;
        cout<<maxi<<endl;
        for(int i = 1; i <= n; i++)
            if(ans[i] == 1)
                cout<<i<<" ";
        cout<<endl;
    }

    return 0;
}