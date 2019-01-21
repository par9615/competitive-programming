#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int h, m, s, actualv, prevv = 0, prevt = 0, n;
	double tdist = 0,actualt;
	char str[1000];

	while(cin.getline(str, 1000))
	{
		n = sscanf(str, "%d:%d:%d %d", &h, &m, &s, &actualv);

		actualt = h*3600 + m*60 + s;

		tdist += (actualt-prevt) * prevv;		
		
		prevt = actualt;

		if(n==3)
			printf("%02d:%02d:%02d %.2lf km\n", h, m, s, tdist/3600);
		else if(n==4)
			prevv = actualv;

	}

	return 0;
}