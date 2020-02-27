#include <iostream>
using namespace std;

int main()
{
    int h1, m1, h2, m2;
    int mins_a, mins_b;
    int res = 0;
    
    while(cin>>h1>>m1>>h2>>m2, h1 || m1 || h2 || m2)
    {
        mins_a = 60*h1 + m1;
        mins_b = 60*h2 + m2;
        
        if(mins_b > mins_a)
            res = mins_b - mins_a;
        else
            res = (mins_b - mins_a) + 1440;
        
        cout<<res<<endl;
    }
    

    return 0;
}
