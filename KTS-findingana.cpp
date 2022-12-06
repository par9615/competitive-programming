#include <iostream>

using namespace std;

int main()
{
    string s;
    int i;
    cin>>s;

    i = s.find('a');

    cout<<s.substr(i)<<endl;

    return 0;
}