#include <iostream>
using namespace std;

char maze[1000+10][1000+10];
int r, c, a, b, maxLen, visited[1000+10][1000+10];
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

bool canGo(int x, int y)
{
    if(x >= 0 && x < r && y >= 0 && y < c && maze[x][y] != '#')
        return true;
    else
        return false;
}

void dfs(int x, int y, int p)
{

    visited[x][y] = 1;

    if(p > maxLen)
    {
        maxLen = p;
        a = x;
        b = y;
    }
    for(int i = 0; i < 4; i++)
    {
        int ax = x+dx[i];
        int ay = y+dy[i];
        if(canGo(ax, ay) && !visited[ax][ay])
            dfs(ax, ay, p+1);
    }

    visited[x][y] = 0;
}

int main()
{
    int t;    
    cin>>t;

    while(t--)
    {
        scanf("%d %d", &c, &r);
        maxLen = 0;

        for(int i = 0; i < r; i++)
            cin>>maze[i];
   
        for(int i = 0; i < r; i++)
        {
            for(int j = 0; j < c; j++)
            {
                if(maze[i][j] == '.')
                {
                    dfs(i, j, 0);
                    i = r;                   
                    break;
                }
            }
          
        }

        dfs(a, b, 0);
        
        printf("Maximum rope length is %d.\n", maxLen);

    }


    return 0;
}