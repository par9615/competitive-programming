#include <cmath>
#include <iostream>

using namespace std;


int main()
{
	double n, k, res;


	while(cin>>n>>k)
	{
		res = 0;
		for(int i = 0; i < k; i++)
			res += log(n-i)/log(10) - log(i+1)/log(10);

		res = floor(res) + 1;

		cout<<int(res)<<endl;	
	}	

	return 0;
}