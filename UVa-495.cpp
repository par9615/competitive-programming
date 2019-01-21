#include <iostream>
using namespace std;

int main()
{
	long long f[5000+10], n;
	f[0] = 0;
	f[1] = 1;
	f[2] = 1;

	for(int i = 3; i < 5005; i++)
	{
		f[i] = f[i-1]+f[i-2];
	}

	while(cin>>n)
	{
		cout<<"The Fibonacci number for "<<n<<" is "<<f[n]<<endl; 
	}
	return 0;
}