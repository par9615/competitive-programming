#include <iostream>

using namespace std;

int main() {
    int sz, p;
    
    while(cin>>sz>>p, sz || p)
    {
        int x, y;
        x = y = sz/2+1;
        
        int r = 1;
        while(r*r < p)
            r += 2, x++, y++;
            
        int squ, sqd;
        squ = r*r;
        sqd = (r-2)*(r-2);
        
        if(p > sqd && p < (sqd+r))
        {
            y -= p-sqd;
        }
        
        else if(p > (sqd+r-1) && p < (sqd+2*r-1))
        {
            y -= r-1;
            x -= p-(sqd+r-1);
        }
        
        else if(p < (squ-r+1) && p > (squ-2*r-+1))
        {
            x -= r-1;
            y -= (squ-r+1)-p;
        }
        
        else
        {
            x -= squ-p;
        } 
           
        cout<<"Line = "<<x<<", column = "<<y<<"."<<endl;
    }
    
    return 0;

}
