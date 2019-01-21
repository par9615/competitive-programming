#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
#define maxsize 100000+10


int main()
{
	int n, points[maxsize], gaps[maxsize], mgcd = 0, ans = 0;

	cin>>n;

	for(int i = 0; i < n; i++)
		cin>>points[i];
	sort(points, points + n);
	for(int i = 1; i < n; i++)
		gaps[i-1] = abs(points[i]-points[i-1]);


	mgcd = __gcd(gaps[1], gaps[0]);

	for(int i = 2; i < n-1; i++)
		mgcd = __gcd(gaps[i], mgcd);


	for(int i = 0; i < n-1; i++)
		ans += gaps[i]/mgcd - 1;

	cout<<ans<<endl;
	return 0;
}