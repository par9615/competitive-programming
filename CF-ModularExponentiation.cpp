#include <iostream>
using namespace std;

int main()
{
	int ans, n, m;

	cin>>n>>m;

	if(n >= 30)
		cout<<m<<endl;
	else
		cout<<m%(1 << n)<<endl;
	return 0;
}