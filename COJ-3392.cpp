#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int l;


	scanf("%d", &l);
		while(l!=0){


			if(l<3) printf("%d\n", 0);

			else printf("%d\n",(l-2)*12);

			scanf("%d", &l);
		}



	return EXIT_SUCCESS;
}
