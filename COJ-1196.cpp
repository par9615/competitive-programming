#include <stdio.h>
#include <cmath>

using namespace std;

int used[15], ans[15], n;
int prime[] = {2,3,5,7,11,13,17,19,23,29,31,37,41};

int isPrime(int num)
{	
	for(int i = 0; i < 13; i++)
		if(num == prime[i])
			return true;
	return false;

}

void backtrack(int pos)
{
	if(pos == n)
	{
		if(!isPrime(ans[n-1]+1))
			return;

		printf("1");
		for(int i = 1; i < n; i++)
			printf(" %d", ans[i]);
		printf("\n");
	}

	else
	{
		for(int i = 2; i <= n; i++)
		{
			if(!used[i] && isPrime(i+ans[pos-1]))
			{
				used[i] = 1;
				ans[pos] = i;
				backtrack(pos+1);
				used[i] = 0;
			}
		}
	}
}

int main()
{
	int t;

	scanf("%d", &t);

	for(int i = 0; i < t; i++)
	{
		scanf("%d", &n);
		ans[0] = 1;
		printf("Case %d:\n", i+1);
		backtrack(1);

	}

	return 0;
}