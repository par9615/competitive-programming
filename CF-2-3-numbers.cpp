#include <iostream>
#include <cmath>
using namespace std;

#define maxsize 2000000000+10




int main()
{
	long long number, count = 0;
	int l, r;

	cin>>l>>r;


	for(int i = 0; i <= 30; i++)
		for(int j = 0; j <= 20; j++)
		{
			number = pow(2, i) * pow(3, j);
			if(number < maxsize)
				if(number >= l && number <= r)
					count++;

		}


	cout<<count<<endl;


	return 0;
}