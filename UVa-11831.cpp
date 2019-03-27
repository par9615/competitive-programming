#include <iostream>

using namespace std;

char G[100+5][100+5];
int n, m, s, dir, x, y, sticker;
int dx[] = {0, 1, 0, -1};  //clockwise directions
int dy[] = {-1, 0, 1, 0 };

bool inbounds(int x, int y)
{
    return (x < n && x >= 0 && y < m && y >= 0) && (G[x][y] != '#');
}

int main() {
    char a;
    
    while(cin>>n>>m>>s, n || m || s)
    {
    
        sticker = 0;
        
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++)
                cin>>G[i][j];
        
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
                if(G[i][j] != '.' && G[i][j] != '*' && G[i][j] != '#')
                {
                    if(G[i][j] == 'N') dir = 0;
                    else if(G[i][j] == 'L' ) dir = 1;
                    else if(G[i][j] == 'S') dir = 2;
                    else if(G[i][j] == 'O') dir = 3;
                    
                    x = i;
                    y = j;
                    break;
                }
        }
        

        for(int i = 0; i < s; i++)
        {
            cin>>a;
            if(a == 'F')
            {
                if(inbounds(x+dy[dir], y+dx[dir]))
                {
                    x+=dy[dir];
                    y+=dx[dir];
                    if(G[x][y] == '*')
                    {
                        sticker++;
                        G[x][y] = '.';
                    }
                }
            }
            else if(a == 'E')
                dir = (dir + 3) % 4;
            
            else if(a == 'D')
                dir = (dir + 5) % 4;

                
        }
        
        cout<<sticker<<endl;
    }
    
    return 0;
}
