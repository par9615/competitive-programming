#include <iostream>
using namespace std;

long long fibo = 0;
long long suma = 1;
long long suma2 = 0;
void fibonacci(int n){
	long long a1 =0,a2 = 1;

	for(int i = 0; i < n; i++){

		fibo = a1+a2;
		suma2+=a2;
		a1 = a2;
		a2 = fibo;
		suma += fibo;
	}


}

int main() {
	int n;

	while(cin>>n){

		if(n == -1)break;


		fibonacci(n);
		cout<<suma2<<" "<<suma<<endl;

		fibo = 0;
		suma = 1;
		suma2 = 0;
	}


	return 0;
}
