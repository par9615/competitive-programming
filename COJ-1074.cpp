#include <stdio.h>
#include <cstring>

int n, ans, col[12];
int row[30], ld[30], rd[30];

int canPlace(int c, int r)
{

	return (!row[r] && !ld[c+r] && !rd[c-r+n-1]);
}

void backtrack(int c)
{

	for(int r = 0; r < n; r++)
	{
		if(canPlace(c,r))
		{
			col[c] = r;
			row[r] = ld[c+r] = rd[c-r+n-1] = true;
			if(c == n-1)
			{
				printf("%d : %d", ++ans, col[0]+1);
				for(int i = 1; i < n; i++)
					printf(" %d", col[i]+1);
				printf("\n");
			}
			else
			{					
				backtrack(c+1);				
			}
			row[r] = ld[c+r] = rd[c-r+n-1] = false;
		}
	}
}

int main()
{

	while(scanf("%d", &n) != EOF)
	{
		memset(col, 0, sizeof(col));
		memset(row,0, sizeof(row));
		memset(ld, 0, sizeof(ld));
		memset(rd, 0, sizeof(rd));

		ans = 0;

		backtrack(0);

		if(ans == 0)
			printf("No Solution.\n");
	}

	return 0;
}