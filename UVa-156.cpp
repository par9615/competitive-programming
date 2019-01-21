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
	vector<string> res;
	string s, aux, comp, d[1000 + 10];
	bool a[1000 + 10];
	bool anagram = false;
	int n = 0;

	while(cin>>s, s != "#")
	{
		d[n] = s;
		a[n] = 0;
		n++;
	}
	
	for(int i = 0; i < n; i++)
	{
		if(a[i])
			continue;

		aux = d[i];
		transform(aux.begin(), aux.end(), aux.begin(), ::tolower);
		sort(aux.begin(), aux.end());


		for(int j = i+1; j < n+1; j++)
		{			
			
				comp = d[j];
				transform(comp.begin(), comp.end(), comp.begin(), ::tolower);
				sort(comp.begin(), comp.end());		

				if(aux == comp)
				{
					anagram = true;
					a[i] = a[j] = 1;
				}				
				
		}

		if(!anagram)
			res.push_back(d[i]);		

		if(d[i] == "")
			cout<<i<<"<--"<<endl;
		anagram = false;

	}


	sort(res.begin(), res.end());

	for(auto a: res)
		cout<<a<<endl;

	return 0;
}