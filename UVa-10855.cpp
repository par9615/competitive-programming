#include<iostream>
#include<string>
#include<algorithm>
#include<iomanip>
#include<map>
#include<vector>
#include<cmath>
#include<utility>
#include<cstring>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

char big[500][500], lil[500][500];

void rotate(int n){
	char aux[n][n];

	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			aux[i][j] = lil[n-j-1][i];
		}
	}

	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			lil[i][j] = aux[i][j];
		}
	}

}


int check(int N, int n){

	int c = 0, res = 0;

	for(int i = 0; i <= N-n; i++)
	{
		for(int j = 0; j <= N-n; j++)
		{
			c = 0;

			for(int h = 0; h < n; h++)
			{	
				for(int k = 0; k < n; k++)
				{

					if(lil[h][k] == big[i+h][k+j])
						c++;
				}
			}

			if(c == n*n)
				res++;
		}
	}

	return res;
}



	
int main(){
	
	
	int N, n;
	

	while(cin>>N>>n, N || n)
	{
		for(int i = 0; i < N; i++)
		{
			for(int j = 0; j < N; j++)
			{
				cin>>big[i][j];
			}
		}

		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < n; j++)
			{
				cin>>lil[i][j];
			}
		}

	
		for(int i = 0; i < 4; i++)
		{
			cout<<check(N,n);
			if(i < 3)
				cout<<" ";
			rotate(n);
		}
		
		cout<<endl;



	}

	return 0;
}