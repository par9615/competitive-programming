#include<iostream>
#include<string>
#include<algorithm>
#include<iomanip>
#include<map>
#include<vector>
#include<cmath>
#include<utility>
#include<cstring>
#include<climits>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;


int main(){

	int myints[] = {10,20,30,30,20,10,10,20};
  	std::vector<int> v(myints,myints+8);           // 10 20 30 30 20 10 10 20

  	std::sort (v.begin(), v.end());                // 10 10 10 20 20 20 30 30

  	std::vector<int>::iterator low,up;
  	low=std::lower_bound (v.begin(), v.end(), 25); //          ^
  	up= std::upper_bound (v.begin(), v.end(), 20); //                   ^

  	std::cout << "lower_bound at position " << (low- v.begin()) << '\n';
  	std::cout << "upper_bound at position " << (up - v.begin()) << '\n';

	return 0;
}