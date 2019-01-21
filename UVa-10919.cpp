#include<iostream>
#include<string>
#include<algorithm>
#include<iomanip>
#include<map>
#include<vector>
#include<cmath>
using namespace std;


	
int main(){
	int k, m, c, r;
	bool degreeReq;

	while(cin>>k, k){
		cin>>m;

		map<string, int> courses;
		degreeReq = true;

		string aux;
		for(int i = 0; i < k; i++){
			cin>>aux;
			courses[aux] = 1;
		}

		while(m--){
			cin>>c>>r;

			string course;
			int metReq = 0;

			for(int i=0; i < c; i++){
				cin>>course;
				metReq += courses[course];
			}

			if(metReq < r)
				degreeReq = false;
		}

		cout<<(degreeReq? "yes": "no")<<endl;
	}
	
	return 0;
}