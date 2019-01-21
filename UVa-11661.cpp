#include<iostream>
#include<string>
#include<algorithm>
#include<iomanip>
#include<map>
#include<vector>
#include<cmath>
using namespace std;


	
int main(){
	int len, mini;
	string highway;


	while(cin>>len, len){
		cin>>highway;
		mini = 200000;
		int actualPos = -1;

		for(int i=0; i < len; i++)
		{
			if (highway[i] == 'R')
			{
				actualPos = i;	
			}

			else if (highway[i] == 'D' && actualPos != -1)
			{
				mini = min(mini, i - actualPos);
			}

			else if(highway[i] == 'Z')
			{
				mini = 0;
				break;
			}

		}

		actualPos = -1;

		for(int i=len-1; i > -1; i--)
		{
			if (highway[i] == 'R')
			{
				actualPos = i;	
			}

			else if (highway[i] == 'D' && actualPos != -1)
			{
				mini = min(mini, actualPos-i);
			}

			else if(highway[i] == 'Z')
			{
				mini = 0;
				break;
			}
			
		}


		cout<<mini<<endl;
	}
	
	return 0;
}