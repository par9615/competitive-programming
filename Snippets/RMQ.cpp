#include <iostream>
#include <cmath>
using namespace std;

int n, a[1000], spt[1000][100];

void rmq()
{
	for(int i = 0; i < n; i++)
		spt[i][0] = i;

	for(int j = 1; (1<<j) <= n; j++)
		for(int i = 0; i + (1<<j) - 1 < n; i++)
		{
			if(a[spt[i][j-1]] < a[spt[i+(1<<(j-1))][j-1]])
				spt[i][j] = spt[i][j-1];
			else
				spt[i][j] = spt[i+(1<<(j-1))][j-1];
		}
}

int query(int i, int j)
{
	int k = (int)floor(log((double)j-i+1)/log(2.0));
	if(a[spt[i][k]] <= a[spt[j-(1<<k)+1][k]])
		return spt[i][k];
	else
		return spt[j-(1<<k)+1][k];

}

int main()
{

	int i, j, t;
	cin>>n;
	for(int i = 0; i < n; i++)
		cin>>a[i];
	
	cin>>t;
	rmq();
	while(t--)
	{
		cin>>i>>j;
		cout<<a[query(i,j)]<<endl;
	}
	return 0;
}