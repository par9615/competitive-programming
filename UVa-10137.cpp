#include <iostream>
#include <set>
#include <cmath>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

#define FOR(i, a, b) for(int i = (int)a; i < (int)b; i++)

int main()
{
	int n;
	double aux, sum, sumn, p;	
	vector<double> v;	

	while(cin>>n, n)
	{
		v.clear();
		p=0;
		sum=0;
		sumn=0;

		FOR(i,0,n) 
		{
			cin>>aux;
			p+=aux;
			v.push_back(aux);
		}

		p/=n;
		
		for(auto a: v)
		{
			if(a > p)
				sum+=long((a-p)*100.00)/100.00;

			else if(a < p)
				sumn+=long((a-p)*100.00)/100.00;

		}
		
		sumn = abs(sumn);

		cout<<"$"<<fixed<<setprecision(2)<<(sum>sumn?sum:sumn)<<endl;		
	}
	
	return 0;
}
