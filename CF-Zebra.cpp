#include <iostream>
using namespace std;

int main()
{
	bool nums[100000 + 5];
	int stripes[100000 + 5];
	int n, sum = 0, j = 0, ans = 1;

	cin>>n;

	for(int i = 0; i < n; i++)
		cin>>nums[i];

	nums[n] = !nums[n-1];

	for(int i = 0; i < n; i++)
	{
		sum++;
		if(nums[i+1] != nums[i])
		{
			stripes[j++] = sum;
			sum = 0;
		}	
	}


	for(int i = 1; i < j; i++)
		if(stripes[i] != stripes[i-1])
			ans = 0;

	if(ans == 1)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}