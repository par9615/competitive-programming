#include <iostream>
using namespace std;

int main()
{
	unsigned int a, b, ans = 0;
	
	while(cin>>a>>b)
	{
		ans = 0;
		for(int i = 0; i < 32; i++)
		{
			ans |= (1<<i)&a ^ (1<<i)&b;
		}	
		cout<<ans<<endl;
	}
	return 0;
}