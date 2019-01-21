#include <iostream>
#include <algorithm>
using namespace std;

int chess(int n, int m)
{
    if(n>m)
            swap(n, m);
            
    if(n==1)
        return m;
    else if(n==2)
        return  4*(m/4)+2*min(2, m % 4);
    else
        return (n*m+1)/2;
}

int main() {

    int n, m, res;
    
    while(cin>>n>>m, n || m)
    {
        res = chess(n,m);
            
        cout<<res<<" knights may be placed on a "<<n<<" row "<<m<<" column board."<<endl;
    }   
    
    return 0;
}



