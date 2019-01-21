#include <iostream>
using namespace std;

int main()
{
	long long n, k, ans;


	while(cin>>n>>k, n | k)
	{
		ans = 1;

		if(k > n/2)
			k = n-k;
		//The trick is in this 
		//also as C(n,k) = C(n, n-k) is better do the second when k > n/2
		//this avoid the time limit

		for(int i = 0; i < k; i++)
		{
			ans *= (n-i);
			ans /= (i+1);

		}

		cout<<ans<<endl;
	}


	return 0;
}