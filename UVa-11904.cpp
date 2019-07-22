#include <iostream>

using namespace std;

char G[25][25];
int n, m;

int di[] = {-1, 0, 1, 0};
int dj[] = {0, 1, 0, -1};

bool inbounds(int i, int j)
{
    return (i >= 0 && i < n && j >= 0 && j < m);
}

int flood_fill(int i, int j, char color)
{
    if(!inbounds(i,j))
        return 0;
    if(G[i][j] != color)
        return 0;
    
    int ans = 1;
    G[i][j] = ' ';
    
    for(int a = 0; a < 4; a++)
        ans += flood_fill(i+di[a], j+dj[a], color);
    
    if(j == 0)
        ans += flood_fill(i, m-1, color);
    
    if(j == m-1)
        ans += flood_fill(i, 0, color);
 
    
    return ans;
    
}

int main() {
    int x, y, maxi;
    char c;
    while(cin>>n>>m)
    {
        maxi = -99999;
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++)
                cin>>G[i][j];
        
        cin>>x>>y;
        c = G[x][y];
        
        flood_fill(x, y, c);
        
  
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++)
                maxi = max(maxi, flood_fill(i, j, c));
        
        cout<<maxi<<endl;
    }
        
    return 0;   
}
