#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int a[15], t, n, ans;

	cin>>t;

	for(int i = 0; i < t; i++)
	{
		cin>>n;
		for(int j = 0; j < n; j++)
			cin>>a[j];

		sort(a, a+n);

		cout<<"Case "<<i+1<<": "<<a[n/2]<<endl;
	}	
	return 0;
}