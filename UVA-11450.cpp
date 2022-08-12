#include<iostream>
#include<cstring>

using namespace std;


#define MAXg 25
#define MAXm 205

int main()
{
    int m, c, t, g[MAXg][MAXg], dp[MAXg][MAXm];

    cin>>t;

    while(t--)
    {
        cin>>m>>c;

        memset(g, 0, sizeof(g));
        memset(dp, 0, sizeof(dp));

        for(int i = 0; i < c; i++)
        {
            cin>>g[i][0];
            for(int j = 1; j <= g[i][0]; j++)
                cin>>g[i][j];
        }

        for(int i = 1; i <= g[0][0]; i++)
            if(m-g[0][i] >= 0)
                dp[0][m-g[0][i]] = 1;

        int b;
        for(int i = 1; i < c; i++)
            for(b = 0; b < m; b++)
                if(dp[i-1][b])
                    for(int k = 1; k <= g[i][0]; k++)
                        if(b-g[i][k] >=0)
                            dp[i][b-g[i][k]] = 1;

        for(b = 0; b <= m && !dp[c-1][b]; b++);

        if(b == m+1) cout<<"no solution"<<endl;
        else cout<<m-b<<endl;

    }

    return 0;
}