#include <iostream>

using namespace std;

int main()
{
	int n, c, ans = 0;
	cin>>n;

	for(int a = 1; a <= n; a++)
	{
		for(int b = a; b <= n; b++)
		{
			c = a^b;
			if(c <= b && c <= n && c <= a+b)
				ans++;
		}
	}

	cout<<ans<<endl;
	return 0;
}