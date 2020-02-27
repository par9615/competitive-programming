#include <stdio.h>
using namespace std;

int main()
{
    int t;
    int h, m;
    
    scanf("%d", &t);
    
    while(t--)
    {
        scanf("%d:%d", &h, &m);
        
        if(h != 12 && m == 0)
            h = 12 - h;
        
        else if(h != 12 && m != 0)
        {
            h = 11 - h;
            m = 60 - m;
        }
        
        else if(h == 12 && m != 0)
        {
            h = 11;
            m = 60 - m;
        }
        
        if(h == 0)
            h = 12;
        if(m == 60)
            m = 0;
            
        printf("%02d:%02d\n", h, m);
    }

    return 0;
}
