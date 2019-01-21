#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

typedef pair<int,int> ii;
typedef pair<double,ii> dii;

int parents[100+5], n;

double freckles[100+5][2], ans;
vector<dii> edges;

int find(int a)
{
	return (parents[a] == a? a : parents[a] = find(parents[a]));
}

void setParents()
{
	for(int i = 0; i <= n; i++)
		parents[i] = i;
}

void kruskal()
{
	int x, y;
	setParents();

	for(auto i: edges)
	{
		x = find(i.second.first);
		y = find(i.second.second);

		if(x != y)
		{
			parents[y] = x;
			ans += i.first;
		}
	}
}

int main()
{
	int t;
	dii e;
	scanf("%d", &t);

	while(t--)
	{
		scanf("\n%d", &n);
		ans = 0;	

		for(int i = 0; i < n; i++)
			scanf("%lf %lf", &freckles[i][0], &freckles[i][1]);

		edges.clear();
		for(int i = 0; i < n; i++)
			for(int j = i+1; j < n; j++)
			{
				e.second.first = i;
				e.second.second = j;
				e.first = sqrt(pow(freckles[i][0]-freckles[j][0], 2) + pow(freckles[i][1]-freckles[j][1], 2));
				edges.push_back(e);
			}

		sort(edges.begin(), edges.end());
		kruskal();

		printf("%.2lf\n", ans);

		if(t > 0)
			printf("\n");	
	}
	return 0;
}