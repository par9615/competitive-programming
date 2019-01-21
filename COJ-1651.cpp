#include <stdio.h>
#include <algorithm>
using namespace std;

int arr[10000+10], st[100000];

int right(int p){return (p<<1)+1;}
int left(int p){return (p<<1);}

void build(int L, int R, int p)
{

	if(L == R)
		st[p] = L;
	else
	{
		build(L, (L+R)/2, left(p));
		build((L+R)/2+1, R, right(p));

		int p1 = st[left(p)], p2 = st[right(p)];

		st[p] = (arr[p1] <= arr[p2]? p1 : p2);
	}
}

int query(int i, int j, int L, int R, int p)
{

	if(i <= L && j >= R) return st[p];
	if(i > R || j < L) return -1;

	int p1 = query(i, j, L, (L+R)/2, left(p));
	int p2 = query(i, j, (L+R)/2+1, R, right(p));

	if(p1 == -1) return p2;
	if(p2 == -1) return p1;

	return (arr[p1] <= arr[p2]? p1: p2);
}

int main()
{
	int n, q, a, b;
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	build(0, n-1, 1);

	scanf("%d", &q);
	for(int i = 0; i < q; i++)
	{
		scanf("%d %d", &a, &b);
		printf("%d\n",arr[query(min(a,b)-1,max(a,b)-1,0,n-1,1)]);
	}

	return 0;
}