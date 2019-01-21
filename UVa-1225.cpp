#include <iostream>
#include <cstring>
using namespace std;


int main()
{
	int t, n, aux, count[10] = {0};

	cin>>t;

	while(t--)
	{
		cin>>n;
		memset(count, 0, sizeof(count));
		for(int i = 1; i <= n; i++)
		{
			aux = i;
			while(aux != 0)
			{
				count[aux%10]++;
				aux/=10;
			}
		}

		cout<<count[0];
		for(int i = 1; i < 10; i++)
			cout<<" "<<count[i];
		cout<<endl;
	}

	return 0;
}