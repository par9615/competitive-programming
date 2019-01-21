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
	int he[2], she[3], available[53], ans;


	while(cin>>she[0]>>she[1]>>she[2]>>he[0]>>he[1], she[0])
	{
		memset(available, 1, sizeof(available));

		for(auto a: he)
			available[a] = 0;

		for(auto a: she)
			available[a] = 0;

		ans = 53;

		sort(he, he+2);
		sort(she, she+3);

		//Ambas de el son mayores que las de ella
		if(he[0] > she[2])
		{
			//cualquiera es suficiente
			for(int i = 1; i < 53 && i < ans; i++)
			{
				if(available[i])
					ans = i;
			}
		}

		//Una de el es mayor que todas las de ella
		if(he[1] > she[2])
		{
			//se necesita la carta que le gane a la mas alta de ella
			for(int i = she[2] + 1; i < 53 && i < ans; i++)
			{
				if(available[i])
					ans = i;
			}
		}

		//Dos de el son mayores que dos de ella
		if(he[0] > she[1])
		{
			for(int i = she[1] + 1; i < 53 && i < ans; i++)
			{
				if(available[i])
					ans = i;
			}
		}


		if(ans == 53)
			ans = -1;

		cout<<ans<<endl;
	}
	
	return 0;
}