#include <stdio.h>
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

#define PI 3.141592653589793
#define NoArea(a) ((PI*pow((a/3),2))+(4*(((a/3)*(a/2))/2)))
#define Area(a) pow(a,2)
int main() {
	double a;

	while(scanf("%lf",&a)!=EOF){

		cout<<fixed<<setprecision(4)<< Area(a) - NoArea(a)<<endl;
	}
	return 0;
}