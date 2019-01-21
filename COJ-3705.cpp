#include <iostream>
using namespace std;

int main()
{
	int n;
	long long ans;

	cin>>n;

	ans = (n*(n-1)*(n-2)*(n-3))/24;

	cout<<ans<<endl;	

	return 0;
}