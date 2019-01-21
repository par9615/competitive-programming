#include <iostream>
using namespace std;

int main() {
	int n;
	char c;
	int f;

	cin>>n;


	for(int i = 0; i < n; i++){
		cin>>c>>f;


		if(c % 2 != 0){
			if(f % 2 != 0){
				cout<<"WHITE"<<endl;
			}
			else cout<<"BLACK"<<endl;
		}

		else{
			if(f % 2 != 0){
							cout<<"BLACK"<<endl;
						}
						else cout<<"WHITE"<<endl;
		}
	}
	return 0;
}
