//Longest Increasing Subsequence O(n^2)
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s = "example";
	int LIS[10000 + 10], maxi, len;
							
							//|e|x|a|m|p|l|e|
	LIS[0] = 1; 			//|1|0|0|0|0|0|0|
	len = s.length();

	for(int i = 1; i < len; i++)
	{
		maxi = 0;
		for(int j = i; j >= 0; j--)
		{
			if(s[j] < s[i])
				maxi = max(maxi, LIS[j]);
		}

		LIS[i] = maxi + 1;
	}


	for(int i = 0; i < len; i++)	// LIS = |1|2|1|2|3|2|2|
		cout<<LIS[i]<<" ";
	
	return 0;
}