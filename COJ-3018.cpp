#include <iostream>
using namespace std;
char maze[30+5][30+5];
int r, c, visited[30+5][30+5], ans;

int inbounds(int x, int y)
{
    return (x>=0 && x<r && y>=0 && y<c);
}

void dfs(int sx, int sy, int ex, int ey)
{
    //cout<<"Visita "<<sx<<" "<<sy<<endl;
    maze[sx][sy] = '#';
    if(sx == ex && sy == ey)
    {
        ans=1;
        return;
    }
    
    if(inbounds(sx-1,sy))
        if(maze[sx-1][sy] == '.' || maze[sx-1][sy] > 'a')
            dfs(sx-1, sy, ex, ey);
    
     if(inbounds(sx,sy+1))
        if(maze[sx][sy+1] == '.' || maze[sx][sy+1] > 'a')
            dfs(sx, sy+1, ex, ey);
     
      if(inbounds(sx+1,sy))
        if(maze[sx+1][sy] == '.' || maze[sx+1][sy] > 'a')
            dfs(sx+1, sy, ex, ey);
      
       if(inbounds(sx,sy-1))
        if(maze[sx][sy-1] == '.' || maze[sx][sy-1] > 'a')
           dfs(sx, sy-1, ex, ey);
    
    
}


int main()
{
	int n, sx, sy, ex, ey;
	
	cin>>n;
	while(n--)
	{
	    cin>>r>>c;
	    ans = 0;
	    for(int i = 0; i < r; i++)
	        for(int j = 0; j < c; j++)
	            {
	                cin>>maze[i][j];
	                if(maze[i][j] == 'b')
	                    sx = i, sy = j;
	                if(maze[i][j] == 'g')
	                    ex = i, ey = j; 
	            }
	            
	    dfs(sx,sy,ex,ey);
	    if(ans)
	        cout<<"Good"<<endl;
	    else
	        cout<<"Bad"<<endl;
	}
	

	return 0;
    
}