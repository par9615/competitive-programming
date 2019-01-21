#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	int k;
	double d, u, v, slow, fast;

	cin>>k;

	for(int i = 0; i < k; i++)
	{
		cin>>d>>v>>u;

		fast = d/u;
		slow = d/sqrt(u*u-v*v);

		cout<<"Case "<<i+1<<": ";

		if(v>=u || u == 0 || v == 0)
			cout<<"can't determine"<<endl;

		else
			cout<<fixed<<setprecision(3)<<fabs(fast-slow)<<endl;


	}		
	
	return 0;
}