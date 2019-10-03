#include <stdio.h>
#include <cmath>
#include <string.h>

using namespace std;

int main() {
    int t,n,r,m[30][30];
    bool ans;
    
    scanf("%d", &t);
    
    while(t--)
    {
        ans = true;
        
        scanf("%d", &n);
        
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                scanf("%d", &m[i][j]);
        
        r = sqrt(n);
        
        int rows[30], cols[30];
        
        for(int i = 0; i < n; i++)
        {
            memset(rows, 0, sizeof(rows));
            memset(cols, 0, sizeof(cols));
            
            for(int j = 0; j < n; j++)
                rows[m[i][j]-1]++, cols[m[j][i]-1]++;
            
            for(int k = 0; k < n; k++)
                if(rows[k] != 1 || cols[k] != 1)
                    ans = false;
        }
        
        for(int i = 0; i < n; i+=r)
        {
            for(int j = 0; j < n; j+=r)
            {
                memset(rows, 0, sizeof(rows));
                //printf("I %d J %d\n", i, j);
                
                for(int a = 0; a < r; a++)
                    for(int b = 0; b < r; b++)
                        rows[m[a+i][b+j]-1]++;
                
                for(int k = 0; k < n; k++)
                if(rows[k] != 1)
                    ans = false;
            }
        }   
                
        if(ans)
            printf("yes\n");
        else
            printf("no\n");
        
    }
    
    
    return 0;
}
