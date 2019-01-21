#include <stdio.h>
#include <queue>
#include <cstring>
using namespace std;

typedef struct point{
	int x,y,z;	
}point;

int l,r,c, visited[35][35][35];
char maze[35][35][35];
point start, ende;

bool operator==(const point a, const point b)
{
	return a.x == b.x && a.y == b.y && a.z == b.z;
}

int inbounds(int x, int y, int z)
{
	return (x >= 0 && x < r && y >= 0 && y < c && z >= 0 && z < l);
}

int canGo(int x, int y, int z)
{
	if(inbounds(x,y,z))
		if(maze[x][y][z] != '#' && visited[x][y][z] == 0)
			return 1;
	
	return 0;
}

point make_point(int x, int y, int z)
{
	point res;
	res.x = x;
	res.y = y;
	res.z = z;
	return res;
}

void bfs(point s)
{
	point a;
	queue<point> q;
	q.push(s);
	
	while(!q.empty())
	{
		a = q.front();
		q.pop();
		
		
		//north
		if(canGo(a.x-1, a.y, a.z))
			visited[a.x-1][a.y][a.z] = visited[a.x][a.y][a.z]+1, q.push(make_point(a.x-1, a.y, a.z));
		
		//east
		if(canGo(a.x, a.y+1, a.z))
			visited[a.x][a.y+1][a.z] = visited[a.x][a.y][a.z]+1, q.push(make_point(a.x, a.y+1, a.z));
		
		//south
		if(canGo(a.x+1, a.y, a.z))
			visited[a.x+1][a.y][a.z] = visited[a.x][a.y][a.z]+1, q.push(make_point(a.x+1, a.y, a.z));
		
		//west
		if(canGo(a.x, a.y-1, a.z))
			visited[a.x][a.y-1][a.z] = visited[a.x][a.y][a.z]+1, q.push(make_point(a.x, a.y-1, a.z));
		
		//up
		if(canGo(a.x, a.y, a.z+1))
			visited[a.x][a.y][a.z+1] = visited[a.x][a.y][a.z]+1, q.push(make_point(a.x, a.y, a.z+1));
		
		//down
		if(canGo(a.x, a.y, a.z-1))
			visited[a.x][a.y][a.z-1] = visited[a.x][a.y][a.z]+1, q.push(make_point(a.x, a.y, a.z-1));
	}
}

int main()
{
	while(scanf("%d %d %d",&l, &r, &c), l||r||c)
	{
		memset(visited, 0, sizeof(int)*35*35*35);
		for(int k = 0; k < l; k++)
		{
			getchar();
			for(int i = 0; i < r; i++)
			{
				for(int j = 0; j < c; j++)
				{
					scanf("%c",&maze[i][j][k]);		
					if(maze[i][j][k] == 'S')
						start.x=i, start.y=j, start.z=k;
					if(maze[i][j][k] == 'E')
						ende.x=i, ende.y=j, ende.z=k;
				}	
				getchar();
			}			
		}			
	
		
		bfs(start);
		if(visited[ende.x][ende.y][ende.z] != 0)
			printf("Escaped in %d minute(s).\n", visited[ende.x][ende.y][ende.z]);
		else
			printf("Trapped!\n");
		
		
	}
	return 0;
}