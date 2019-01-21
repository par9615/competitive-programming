#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int a, b, c, d;


	while(cin>>a>>b>>c>>d)
	{
		cout<<abs((d-b)-(c-a))<<endl;
	}
	return 0;
}