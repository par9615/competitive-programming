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
	int height, length, col[10010], times, actual, previous;
	

	while(cin>>height, height){
		cin>>length;

		memset(col, 0, sizeof(col));
		times = 0;


		for(int i=0; i < length; i++)
		{
			cin>>col[i];
		}

		times = height - col[0];

		actual = 1;		

		while(actual < length)
		{
			if(col[actual] < col[actual-1])
			{
				times+=(col[actual-1] - col[actual]);
			}
			actual++;
		}

		cout<<times<<endl;
	}
	return 0;
}