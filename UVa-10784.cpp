#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	long long n,res;
	int t = 0;

	while(cin>>n, n)
	{

		cout<<"Case "<<++t<<": ";
		res = ceil((3+sqrt(9+8*n))/2);
		cout<<res<<endl;;
	}	
	return 0;
}