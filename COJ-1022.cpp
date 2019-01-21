#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int cases, n , a[100], cont = 0;

	cin >> cases;

	for(int i = 0; i < cases; i++){

		cin>>n;

		for(int j = 0; j < n ; j++)
			cin>> a[j];

		for(int k = 0; k < (n -1); k++){
			for(int h = 0 ; h < n -k -1; h++){
				if(a[h]>a[h+1])swap(a[h],a[h+1]),cont++;
			}
		}

		cout<<"Optimal train swapping takes "<<cont<<" swaps."<<endl;
		cont=0;

	}

	return 0;
}
