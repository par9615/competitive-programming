#include <iostream>
using namespace std;

int main()
{
    string s;
    int res;

    cin>>s;

    res = (s[0] == '5' && s[1] == '5' && s[2] == '5');

    cout<<res<<endl;

    return 0;
}