#include <stdio.h>

int main() {
	
	unsigned long int n;
	
	while(scanf("%lu",&n) != EOF){

		if(n%2 != 0)n++;
		n/=2;
		printf("%lu\n",(n*(((2*n)-1)*((2*n)+1))/3)%1000000007 );

		
	}
	return 0;
}
