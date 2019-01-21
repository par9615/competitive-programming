#include <iostream>
#include <vector>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
        cin.tie(0);
	vector <int> div(500003,0);
	for(int i=1; i<=500001; i++){
		for(int j=i; j<=500001; j+=i){
			if(i != j)div[j]+=i;
		}
	}

	int cases,n;
	cin>>cases;
	while(cases--){
		cin>>n;
		cout<<div[n]<<"\n";
	}
	return 0;
}