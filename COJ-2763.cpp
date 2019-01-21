#include <iostream>
#include <cmath>
using namespace std;

int k, n, inorder[1050], level[15][1000];


void buildTree(int l, int r, int p, int i)
{
	int m;
	if(l < r)
	{
		m = l+(r-l)/2;

		level[p][i] = inorder[m];
		buildTree(l  , m, p+1, i<<1);
		buildTree(m+1, r, p+1, (i<<1)+1);
	}
}


int main()
{

	cin>>k;
	n = pow(2,k)-1;

	for(int i = 0; i < n; i++)
		cin>>inorder[i];

	buildTree(0,n,0,0);

	int j;
	for(int i = 0; i < k; i++)
	{
		j = 0;
		cout<<level[i][j++];
		while(level[i][j] != 0)
			cout<<" "<<level[i][j++];
		cout<<endl;
	}

	return 0;
}