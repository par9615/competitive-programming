#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double n;
    cin>>n;
    cout<<fixed<<setprecision(4)<<100/n<<endl;
    cout<<fixed<<setprecision(4)<<100/(100-n)<<endl;
    
    return 0;
}