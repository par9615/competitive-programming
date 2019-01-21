#include <iostream>
#include <vector>

using namespace std;

#define FOR(i,a,b) for(int i = int(a); i < int(b); i++)

int main()
{	
	int aux;
	int n, maxi, ans= 0;
	int o[20], e[20], LIS[20];
	cin>>n;

	FOR(i,0,n)
	{
		cin>>aux;
		o[i] = (aux-1);		
	}
	

	while(cin>>aux)
	{
		e[o[0]] = aux;
		ans = 0;

		FOR(i,1,n)
		{
			cin>>aux;
			e[o[i]] = aux;			
		}

		LIS[0] = 1;
		FOR(i,1,n)
		{
			maxi = 0;
			FOR(j,0,i)
			{
				if(e[j] < e[i])
					maxi = max(maxi,LIS[j]);
			}
			LIS[i] = maxi + 1;
			ans = max(ans,LIS[i]);
		}
		cout<<ans<<endl;

	}


	
 	
	

	return 0; 
}