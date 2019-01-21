#include <iostream>
using namespace std;

int main() 
{
    int a;

    cin>>a;

    cout<<((a<<1)*a)+((5*(a<<1))>>1)<<endl;

    return 0;
}