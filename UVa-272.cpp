#include<stdio.h>


using namespace std;

int main(){
  char x;
  int c = 0;

  while(scanf("%c", &x) != EOF){ //no utilizar cin porque manda al carajo los espacios
    if(x == '"')
      if(!c){ printf("``"); c++;}
      else {printf("''"); c = 0;}

    else printf("%c", x);

  }
  return 0;
}
