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
	int k, r, c;
	char p;

	cin>>k;

	while(k--)
	{
		cin>>p>>r>>c;

		if(p == 'r' || p == 'Q')
			cout<<min(r,c)<<endl;

		if(p == 'k')
			cout<<((r*c)+1)/2<<endl;

		if(p == 'K')
			cout<<((r+1)/2) * ((c+1)/2)<<endl;
	}
	
	return 0;
}
