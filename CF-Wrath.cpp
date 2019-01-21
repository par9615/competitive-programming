#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n, a[1000000 + 10], ans = 1;
	cin>>n;

	for(int i = 0; i < n ; i++)
		cin>>a[i];

	if(a[n-1] == 0)
		ans++;

	for(int i = n-2; i >= 0; i--)
	{
		a[i] = max(a[i+1] -1, a[i]);

		if(a[i] == 0)
			ans++;
	}	

	if(a[0] == 0)
		ans--;

	cout<<ans<<endl;

	return 0;
}