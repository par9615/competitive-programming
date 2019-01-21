//Suma de cuadrados
#include <iostream>
using namespace std;

int main()
{
	/*int sq[105], n;

	for(int i = 1; i <= 100; i++)
		sq[i] = sq[i-1] + i*i;

	while(cin>>n, n)
		cout<<sq[n]<<endl;*/

	int n, ans;

	while(cin>>n, n)
		cout<<(n*(n+1)*(2*n+1))/6<<endl;

	return 0;
}