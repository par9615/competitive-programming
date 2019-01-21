#include <iostream>
using namespace std;

int main()
{
	int x,y,z,t;

	cin>>t;

	while(t--)
	{
		cin>>x>>y>>z;
		cout<<z*(x+x-y)/(x+y)<<endl;
	}	
	
	return 0;
}