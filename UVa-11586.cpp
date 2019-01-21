#include<iostream>
#include<string>
#include<algorithm>
#include<iomanip>
#include<map>
#include<vector>
#include<cmath>
using namespace std;


	
int main(){
	int n, f, m;
	string pieces;
	bool loop;

	cin>>n;
	cin.ignore();

	while(n--){
		loop = true;		
		getline(cin, pieces);
		f=0;
		m=0;
		int len = pieces.length();

		for(auto a: pieces){
			if(a =='F') f++;
			else if(a =='M') m++;

		}
	
		
		if((f != m) || ( m == 1 && f == 1))
			loop = false;

		cout<<(loop? "LOOP": "NO LOOP")<<endl;

	}
	
	return 0;
}