#include <iostream>
#include <vector>
using namespace std;

int main ()
{
	vector<int> parents[1000+5];
	bool ans = true;
	int n, aux, c;

	cin>>n;

	for(int i = 2; i <= n; i++)
	{
		cin>>aux;
		parents[aux].push_back(i);
	}

	for(int i = 1; i <= n; i++)
	{
		if(parents[i].empty()) continue;
		c = 0;
		for(auto a: parents[i])
			if(parents[a].empty())
				c++;

		if(c < 3) 
		{
			ans = false;
			break;
		}
	}

	if(ans)
		cout<<"Yes"<<endl;
	else 
		cout<<"No"<<endl;
	
	return 0;
	
}