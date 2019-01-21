#include <iostream>
#include <stdio.h>

using namespace std;


int main() {
	int n;
	int i,f;
	long long sum = 0;

	cin>>n;


		for(int j = 0; j < n; j++){
			cin>>i>>f;

			while(i<=f){

				sum += i*(i+1)*(i+2);
				i++;
			}

			cout<<sum%100<<endl;
			sum = 0;

		}



	return 0;
}
