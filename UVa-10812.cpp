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
	int n, s, d, x, y;

	cin>>n;

	while(n--)
	{
		cin>>s>>d;


		y = abs(d - s)/2;
		x = s - y;

		if((x+y==s) && (abs(x-y)==d))
			cout<<max(x,y)<<" "<<min(x,y)<<endl;

		else 
			cout<<"impossible"<<endl;
	}
	
	return 0;
}