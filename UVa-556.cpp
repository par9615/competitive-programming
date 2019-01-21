#include<iostream>
#include<cmath>
#include<map>
#include<vector>
#include<algorithm>
#include<utility>
#include<set>
#include<cctype>
#include<cstring>
using namespace std;

typedef long long         ll;
typedef vector<int>       vi;
typedef pair<int, int>    ii;
typedef set<int>          si;
typedef map<string, int>  msi;

#define FOR(i, a , b) for(int i = int(a); i < int(b); i++)

int h,w,x = 0,y = 0,dir = 0,maze[10000][10000], v[6];

void muevase()
{
  if(dir == 0)
  {
    if(maze[y+1][x] != -1)
    {
      v[maze[y][x]]--;
      v[++maze[y][x]]++;
      dir = 3;
      y++;
    }

    else if(maze[y][x+1] != -1)
    {
      v[maze[y][x]]--;
      v[++maze[y][x]]++;
      x++;
    }

    else{
      dir++;
      muevase();
    }
  }

  else if(dir == 1)
  {
    if(maze[y][x+1] != -1)
    {
      v[maze[y][x]]--;
      v[++maze[y][x]]++;
      dir = 0;
      x++;
    }

    else if(maze[y-1][x] != -1)
    {
      v[maze[y][x]]--;
      v[++maze[y][x]]++;
      y--;
    }

    else{
      dir++;
      muevase();
    }
  }

  else if(dir == 2)
  {
    if(maze[y-1][x] != -1)
    {
      v[maze[y][x]]--;
      v[++maze[y][x]]++;
      dir = 1;
      y--;
    }

    else if(maze[y][x-1] != -1)
    {
      v[maze[y][x]]--;
      v[++maze[y][x]]++;
      x--;
    }

    else{
      dir++;
      muevase();
    }
  }

  else if(dir == 3)
  {
    if(maze[y][x-1] != -1)
    {
      v[maze[y][x]]--;
      v[++maze[y][x]]++;
      dir = 2;
      x--;
    }

    else if(maze[y+1][x] != -1)
    {
      v[maze[y][x]]--;
      v[++maze[y][x]]++;
      y++;
    }

    else{
      dir=0;
      muevase();
    }
  }

}


int main()
{
  char c;
  int ix,iy;

  while(cin>>h>>w, h||w)
  {
    dir = 0;

    memset(v, 0, sizeof(v));

    iy = h;
    ix = 1;

    y = h;
    x = 1;

    for(int i=0; i <= h+1; i++)
    {
      for(int j=0; j <= w+1; j++)
      {
        if(i==0 || j==0 || i==h+1 ||j==w+1)
          maze[i][j] = -1;

        else{
          cin>>c;
          if(c == '1')  maze[i][j] = -1;
          else
          {
            maze[i][j] = 0;
            v[0]++;
          }
        }

      }
    }

    muevase();

    while(!(x == ix && y == iy))
    {
      muevase();
    }

    for(int i = 0; i < 5; i++)
      printf("%3d", v[i]);

    cout<<endl;

  }

  return 0;
}
