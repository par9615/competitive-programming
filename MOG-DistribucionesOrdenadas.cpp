#include<iostream>
using namespace std;

#define P 1000000007

long long combination(long long n, long long k)
{
	long long res = 1;

	k = (k>n/2? n-k : k);

	for(int i = 0; i < k; i++)
	{
		res*=n-i;		
		res/=i+1;

		res%=P;	
	}

	return res;
}
#include <.h>
int main()
{
	long long n, ans = 0;

	cin>>n;

	ans = ((2*combination(n+n-1, n-1)%P)%P - n)%P;

	cout<<ans<<endl;
}