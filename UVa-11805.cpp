#include <iostream>
using namespace std;

int main()
{
	int n, k, p, ans, t;	

	cin>>t;

	for(int i = 0; i < t; i++)
	{
		cin>>n>>k>>p;
		ans = (k+p)%n;

		cout<<"Case "<<i+1<<": ";

		if(ans == 0)
			cout<<n<<endl;
		else
			cout<<ans<<endl;

	}
	return 0;
}