#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	
	int n, c, s, count, actual;
	int move;


	while(cin>>n>>c>>s)
	{
		actual = 0;
		count = 0;

		if(actual+1 == s)
				count++;

		for(int i = 0; i < c; i++)
		{
			cin>>move;

			actual = (actual+move+n)%n;

			if(actual+1 == s)
				count++;

		}

		cout<<count<<endl;

	}

	return 0;
}