#include <iostream>
#include <cstring>
using namespace std;

int visited[20+5], nums[20+5], sol[20+5], sum, ans, n, k;


void backtrack(int track)
{
	if(track == k)
	{
		sum = 0;
		for(int i = 0; i < k; i++)
			if(visited[i])
				sum+=nums[i];

		if(sum <= n && sum > ans)
		{
			ans = sum;
			for(int i = 0; i < k; i++)
				sol[i] = visited[i];
		}
	}

	else
	{
		visited[track] = 1;
		backtrack(track+1);
		visited[track] = 0;
		backtrack(track+1);
	}
}


int main()
{
	int aux;

	while(cin>>n>>k)
	{
		memset(visited, 0, sizeof(visited));		

		for(int i = 0; i < k; i++)
			cin>>aux, nums[i]=aux;
		ans = sum = 0;

		backtrack(0);

		for(int i = 0; i < k; i++)
			if(sol[i])
				cout<<nums[i]<<" ";
		cout<<"sum:"<<ans<<endl;
		
	}	
	return 0;
}