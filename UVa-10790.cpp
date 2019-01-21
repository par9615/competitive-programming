#include <iostream>
using namespace std;

int main()
{

	long long a, b, ga, gb, ans;
	int t = 1;

	while(cin>>a>>b, a || b)
	{
		ga = (a*(a-1))/2;
		gb = (b*(b-1))/2;

		ans = ga*gb;

		cout<<"Case "<<t++<<": ";
		cout<<ans<<endl;
	}

	return 0;
}