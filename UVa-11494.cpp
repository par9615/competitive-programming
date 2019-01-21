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
	int x1, x2, y1, y2;


	while(cin>>x1>>y1>>x2>>y2, x1 || y1 || x2 || y2)
	{
		if(x1 == x2 && y1 == y2)
			cout<<"0"<<endl;

		else if(x1 == x2 || y1 == y2)
			cout<<"1"<<endl;

		else if(abs(x2-x1) == abs(y2-y1))
			cout<<"1"<<endl;

		else
			cout<<"2"<<endl;
	}
	
	return 0;
}