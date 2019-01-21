#include <iostream>
using namespace std;

#define endl '\n'
int vlp[1001];

int gcd(int x, int y){
	if(y == 0)return x;

	else
		return gcd(y, x%y);
}

int main() {

  std::ios::sync_with_stdio(false);
cin.tie(0);
	int cases, size;
	int suma = 0;

	vlp[0] = 0;
	vlp[1] = 3;

	for(int s = 2; s < 1001; s++){

		for(int i = 1; i < s; i++){
			if(gcd(s,i) == 1)suma ++;
		}
		vlp[s] = vlp[s-1] + (2 * suma);
		suma = 0;
	}


	cin>>cases;

	for(int i = 0; i < cases; i++){
		cin>>size;
		cout<<i + 1<<" "<<size<<" "<<vlp[size]<<endl;
	}

	return 0;
}