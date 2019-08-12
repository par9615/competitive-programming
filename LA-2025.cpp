#include <stdio.h>
using namespace std;

#define SIZE 1000

int a, b, c, d;
char matrix[SIZE+5][SIZE+5], submatrix[SIZE][SIZE];

int sub(int y, int x)
{
    for(int i = 0; i < a; i++)
        for(int j = 0; j < b; j++)
        {
            if(submatrix[i][j] != matrix[y+i][x+j])
                return 0;
            if(matrix[y+i][x+j] == '*' || matrix[y+i][x+j]  == '2')
                return 1;
        }
    return 2;
}

void change(int y, int x)
{
    for(int i = 0; i < a; i++)
        for(int j = 0; j < b; j++)
        {
            if(submatrix[i][j] == '1')
                matrix[y+i][x+j] = '2';
            else
                matrix[y+i][x+j] = '*';
        }
     
}


int main()
{

    while(scanf("%d %d\n", &a, &b))
    {
        for(int i = 0; i < a; i++)
        {
            for(int j = 0; j < b; j++)
            {
                if(j == 0)
                    scanf("%c", &submatrix[i][j]);
                else  
                    scanf(" %c", &submatrix[i][j]);
            }
            getchar();
        }
        
        scanf("%d %d\n", &c, &d);
        for(int i = 0; i < c; i++)
        {
            for(int j = 0; j < d; j++)
            {
                if(j == 0)
                    scanf("%c", &matrix[i][j]);
                else
                    scanf(" %c", &matrix[i][j]);
            }
            getchar();
        }
        
        int maxi, maxj;
        maxi = c - a;
        maxj = d - b;

        if(maxi >= 0 && maxj >= 0)
        {
            for(int i = 0; i <= maxi; i++)
                for(int j = 0; j <= maxj; j++)
                    if(sub(i, j) == 2)
                    {
                        change(i, j);
                        i+=(b-1);
                    }
        }
        
        for(int i = 0; i < c; i++)
        {
            for(int j = 0; j < d; j++)
            {
                if(j != 0)
                    printf(" ");
                printf("%c", matrix[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
