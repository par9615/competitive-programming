#include <iostream>
#include <climits>
using namespace std;

int main()
{
	int n, k, bucket, ans = INT_MAX;	


	cin>>n>>k;

	for(int i = 0; i < n; i++)
	{
		cin>>bucket;
		if(bucket%k == 0)
		{
			ans = max(ans, bucket);
		}
	}

	cout<<k/ans<<endl;

	return 0;
}