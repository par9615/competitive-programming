#include <iostream>
using namespace std;

int dx[] = {0, 1, 0, -1};
int dy[] = {-1, 0, 1, 0};

char a[100+5][100+5];

int n, m, k;

int floodfill(int c, int r)
{
    if(c < 0 || c >= m || r < 0 || r >= n) return 0;
    if(a[r][c] != '#') return 0;

    int ans = 1;
    a[r][c] = '.';

    for(int i = 0; i < 4; i++)
        ans += floodfill(c + dx[i], r + dy[i]);

    return ans;
}

int main()
{
    int maxi, x, y;

    cin>>n>>m>>k;
    maxi = -9999;

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            a[i][j] = '.';       
    
    for(int i = 0; i < k; i++)
        cin>>x>>y, a[--x][--y] = '#';
   
    
    for(int i = 0; i < n; i++)
         for(int j = 0; j < m; j++)
            maxi = max(maxi, floodfill(j, i));

    cout<<maxi<<endl;

    return 0;
}