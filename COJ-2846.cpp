#include <stdio.h>

int main()
{
	long long n, id;
	int t;

	scanf("%d", &t);

	while(t--)
	{
		scanf("%lld", &n);
		id = 0;
		id += (n%1000)*10;

		while(n)
		{
			id+=n%10;
			n/=10;
		}

		if(id > 9999)
			printf("%04lld\n", id%10000);

		else if(id < 1000)
			printf("%04lld\n", id+1000);

		else 
			printf("%04lld\n", id);

	}

	return 0;
}