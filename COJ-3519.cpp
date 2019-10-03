#include <stdio.h>

using namespace std;

int main() {
    int t,b,r,p;
    
    scanf("%d", &t);
    
    while(t--)
    {
        scanf("%d %d %d", &b, &r, &p);
        
        int aux = b ^ r;
        int count = __builtin_popcount(aux);
        
        if(count <= p && !((p-count)&1))
            printf("yes\n");
        else
            printf("no\n");
        
    }
    
    return 0;
}
