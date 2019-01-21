#include<iostream>
#include<algorithm>
#include <ctime>
using namespace std;

int factorial[] = {1,2,6,24,120,720,5040,40320};

int main()
{
	int cases;
	string number[] = {"1","12","123","1234","12345","123456","1234567","12345678"};

	cin>>cases;

	for(int i = 0; i < cases; i++){
		int N;
		cin>>N;
		string aux=number[N-1];
		for(int j = 0; j < factorial[N-1]/3; j++){
			next_permutation(aux.begin(),aux.end());
		}

		cout<<aux<<endl;;

	}

return 0;

}