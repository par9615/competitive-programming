#include <iostream>
using namespace std;

int main()
{
    string s;
    int n;
    cin>>n;

    for(int i = 0; i < n; i++)
    {
        cin>>s;

        if(!(i&1)) cout<<s<<endl;
    }
    return 0;
}