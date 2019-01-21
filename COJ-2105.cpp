#include <iostream>
using namespace std;

int main()
{
	int n, m, ans;
	char matrix[1000+5][1000+5];

	cin>>n>>m;
	ans = 0;

	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++)
			cin>>matrix[i][j];

	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			if(matrix[i][j] == '+')
			{
				if(matrix[i-1][j] == '-' || matrix[i][j+1] == '-' || matrix[i+1][j] == '-' || matrix[i][j-1] == '-')
					ans++;
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}