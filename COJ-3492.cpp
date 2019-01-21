#include <iostream>
using namespace std;

int main()
{
	int t, n;
	long long fact[11];

	fact[0] = 1;
	fact[1] = 1;

	for(int i = 2; i < 11; i++)
		fact[i] = i*fact[i-1];

	cin>>t;

	for(int i = 0; i < t; i++)
	{
		cin>>n;
		cout<<"Case #"<<i+1<<": "<<fact[n]<<endl;
	}

	return 0;
}