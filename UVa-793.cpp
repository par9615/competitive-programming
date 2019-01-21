#include<iostream>

int find(int p[], int i)
{
	return (p[i] == i? i : p[i] = find(p, p[i]));
}

void _union(int p[], int i, int j)
{
	int x = find(p, i);
	int y = find(p, j);

	p[x] = y;
}

using namespace std;

int main()
{
	string s;
	int t, yes, no, nodes, a, b, p[10000];
	char op;

	cin>>t;
	for(int j = 0; j < t; j++)
	{
		yes = no = 0;
		scanf("\n%d\n", &nodes);

		for(int i = 0; i <= nodes; i++)
			p[i]=i;

		while(1)
		{
			if(!getline(cin, s) || s.empty())
				break;
			sscanf(s.c_str(),"%c %d %d", &op, &a, &b);

			if(op == 'c')
			{
				_union(p, a, b);
			}
			else 
			{
				if(find(p,a) == find(p,b))
					yes++;

				else
					no++;
			}	
			

		}
		if(j>0)
			cout<<endl;
		cout<<yes<<","<<no<<endl;

	}

	return 0;
}