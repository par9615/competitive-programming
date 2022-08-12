#include <iostream>
#include <map>
using namespace std;

int main()
{
    string s;
    map<char, bool> C;
    map<char, char> D;

    D['R'] = 'S';
    D['B'] = 'K';
    D['L'] = 'H';

    cin>>s;

    s += "   ";

    int len = s.length();
    for(int i = 0; i < len-3; i++)
    {
        C[s[i]] = true;
        C[s[i+1]] = true;
        C[s[i+2]] = true;

        if(C['R'] && C['B'] && C['L'])
        {
            cout<<'C';
            i +=2;
        }
        else
            cout<<D[s[i]];

        C['R'] = false;
        C['B'] = false;
        C['L'] = false;
    }

    cout<<endl;

    return 0;
}