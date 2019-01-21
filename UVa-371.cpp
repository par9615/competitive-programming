#include <iostream>
#include <climits>
using namespace std;

int main()
{
	long long l, h, v, s, aux, c;

	while(cin>>l>>h, l || h)
	{
		s = LLONG_MIN;
		if(l > h)
			swap(l, h);
		
		for(int i = l; i <= h; i++)
		{
			aux = i;
			c = 0;
			while(true)
			{
				if(aux&1)
					aux = 3*aux + 1;
				else
					aux/=2;
				c++;

				if(aux == 1)
					break;
			}

			if(c > s)
				s = c, v = i;

		}

		cout<<"Between "<<l<<" and "<<h<<", "<<v<<" generates the longest sequence of "<<s<<" values."<<endl;
	}

	return 0;
}