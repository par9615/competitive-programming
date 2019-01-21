#include <iostream>
#include <cmath>
using namespace std;

int main() {
	string a;
	cin>>a;
	int mid = a.length()/2;
	if(a.length() % 2 != 0 || (a.length()<2 || a.length() > 20)){
	cout<<a<<endl;
	for(unsigned int i = 0; i < a.length()/2; i++){
		for(unsigned int j = 0; j < a.length(); j++){

			if(j == mid - i){
				if(i == 0)cout<<" ";
				while(j != mid + i){
					if (j == mid) cout<<" ";
					cout<<" ", j++;
				}
			}
			else cout<<a[j];

		}
		cout<<endl;
	}

	for(unsigned int i = (a.length()/2) -2; i < a.length(); i--){
			for(unsigned int j = 0; j < a.length(); j++){

				if(j == mid - i){
					if(i == 0)cout<<" ";
					while(j != mid + i){
						if (j == mid) cout<<" ";
						cout<<" ", j++;
					}
				}
				else cout<<a[j];

			}
			cout<<endl;
		}

	cout<<a;
	}

	else cout<<"error";
	return 0;
}
