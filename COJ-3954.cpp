#include <stdio.h>

int arr[60000], st[500000];

long long right(int p)
{
	return (p<<1) + 1;
}

long long left(int p)
{
	return (p<<1);
}

void build(int L, int R, long long p)
{
	if(L==R)
		st[p] = arr[L];
	else
	{
		build(L, (L+R)/2, left(p));
		build((L+R)/2 + 1, R, right(p));
		
		st[p] = st[left(p)]+st[right(p)];
	}
}

int query(int a, int b, int L, int R, long long p)
{
	if(a <= L && b >= R)
		return st[p];
	if(a > R || b < L)
		return 0;
	
	int p1 = query(a, b, L, (L+R)/2, left(p));
	int p2 = query(a, b, (L+R)/2+1, R, right(p));

	return p1+p2;
}

int update(int i, int v, int L, int R, long long p)
{
	if(L==R)
	{
		arr[i]+=v;
		st[p] += v;
		return st[p];
	}

	if(i < (L+R)/2+1)
		st[p] = update(i, v, L, (L+R)/2, left(p)) + st[right(p)];
	if(i > (L+R)/2)
		st[p] = update(i, v, (L+R)/2+1, R, right(p)) + st[left(p)];
	
	return st[p];
} 


int main()
{
	int n, q, c, a, b;
	scanf("%d %d", &n, &q);
	for(int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	
	build(0, n-1, 1);
	for(int i = 0; i < q; i++)
	{
		scanf("%d %d %d", &c, &a, &b);
		
		if(c == 1)
		{
			update(a-1, b, 0, n-1, 1);
			printf("%d %d\n", c, arr[a-1]);
		}
		
		if(c&1 && c != 1)
			printf("Error\n");
		
		if(!(c&1))
		{
			printf("%d %d\n", c, query(a-1, b-1, 0, n-1, 1));
		}
	}		
	return 0;
}
