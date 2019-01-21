#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	long long ans, n, t;

	cin>>t;

	while(t--)
	{
		cin>>n;
		ans = (sqrt(8*n + 1)-1)/2;
		cout<<ans<<endl;
	}
	return 0;
}