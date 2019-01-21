#include <iostream>
using namespace std;

int main()
{
	int t = 0, r, n, ans;

	while(cin>>r>>n, r || n)
	{
		ans = (r-1)/n;
		cout<<"Case "<<++t<<": ";

		if(ans > 26)
			cout<<"impossible"<<endl;
		else
			cout<<ans<<endl;
	}	
	return 0;
}