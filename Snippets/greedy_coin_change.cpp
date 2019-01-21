#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int minCoins(vector<int> coins, int money)
{
	if(money == 0)
		return 0;

	int global_min = INT_MAX;
	int local_min;

	for(auto a: coins)
	{
		if(a <= money)
		{
			local_min = minCoins(coins, money-a);
			global_min = min(global_min, local_min + 1);
		}
	}

	return global_min;
}

int main()
{
	vector<int> coins = {25, 10, 5, 1};	

	cout<<minCoins(coins, 42);

	return 0;
}