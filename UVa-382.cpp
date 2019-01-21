#include <iostream>
#include <iomanip>
using namespace std;

int div_sum (int n)
{
	int sum = 0;

	for(int i = 1; i < n; i++)
		if(n % i == 0)
			sum += i;

	return sum;
}

int main()
{

	int sum, n;

	cout<<"PERFECTION OUTPUT"<<endl;

	while(cin>>n, n)
	{
		cout<<setw(5)<<n<<"  ";
		sum = div_sum(n);
		if(sum == n)
			cout<<"PERFECT"<<endl;
		else if(sum < n)
			cout<<"DEFICIENT"<<endl;
		else
			cout<<"ABUNDANT"<<endl;
	}

	cout<<"END OF OUTPUT"<<endl;
	return 0;
}