#include <iostream>
using namespace std;

int main()
{
	int a, b, count, sum;


	while(cin>>a>>b, a | b)
	{
		count  = 0;
		sum = 0;
		
		while(a != 0 || b !=0)
		{
			sum += a%10 + b%10;
			if(sum > 9)
			{
				sum /= 10;
				count++;
			}
			else
				sum = 0;

			a/=10;
			b/=10;
		}

		if(count == 0)
			cout<<"No carry operation."<<endl;
		else if(count == 1)
			cout<<count<<" carry operation."<<endl;
		else
			cout<<count<<" carry operations."<<endl;
	}
	return 0;
}