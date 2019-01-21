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



	
int main(){

	int n, matrix[100 +10][100 +10];
	int rowP, colP, aux, x, y; 
	bool correct;
	int c;

	while(cin>>n, n)
	{

		rowP = colP = aux = 0;
		x = y = -1;

		for(int i = 0; i < n; i++)
			for(int j = 0; j < n; j++)		
				cin>>matrix[i][j];


		for(int i = 0; i < n; i++)
		{
			aux = 0;
			for(int j = 0; j < n; j++)
				{
					aux+= matrix[i][j];
				}

			if(aux&1)
			{
				rowP++;
				x = i + 1;
			}
		}


		for(int i = 0; i < n; i++)
		{
			aux = 0;
			for(int j = 0; j < n; j++)
				{
					aux+= matrix[j][i];
				}

			if(aux&1)
			{
				colP++;
				y = i + 1;
			}
		}


	if(x == -1 && y == -1)
		cout<<"OK"<<endl;

	else if(rowP == 1 && colP == 1)	
		cout<<"Change bit ("<<x<<","<<y<<")"<<endl;

	else
		cout<<"Corrupt"<<endl;

	}


	
	
	return 0;
}