//Longest Common String O(m*n)
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int LCS[1000][1000], len1, len2;
	string s1 = "AGGTAB", s2 = "GXTXAYB";

	len1 = s1.length();
	len2 = s2.length();


	for(int i = 0; i < len1 + 1; i++)
	{
		for(int j = 0; j < len2 + 1; j++)
		{
			if(i == 0 || j == 0)
				LCS[i][j] == 0;

			else if(s1[i-1] == s2[j-1])
				LCS[i][j] = LCS[i-1][j-1] + 1;
			
			else
				LCS[i][j] = max(LCS[i-1][j], LCS[i][j-1]);			
		}
	}
	
	//Imprime matriz LCS
	for(int i = 0; i < len1 + 1; i++)
	{
		for(int j = 0; j < len2 + +1; j++)
		{
			cout<<LCS[i][j]<<" ";
		}
		cout<<endl;
	}

	//Obtienes el LCS
	cout<<LCS[len1][len2]<<endl;
	return 0;
}