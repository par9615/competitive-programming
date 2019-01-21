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

int ans = 0;

int sequence(int x0)
{	
	string number = to_string(x0);
	int x1 = number.length();	
	ans++;
	if(x1 == x0) return ans;
	sequence(x1);
}

	
int main(){
	string s;

	while(cin>>s, s != "END")
	{
		if(s == "1")
		{
			cout<<"1"<<endl;
			continue;
		}
		ans = 1;
		sequence(s.length());

		cout<<ans<<endl;
	}
	
	return 0;
}