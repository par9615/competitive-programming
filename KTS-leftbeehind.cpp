#include <iostream>

using namespace std;

int main()
{
    int a, b;

    while(cin>>a>>b, a || b)
    {
        if((a+b) == 13) cout<<"Never speak again."<<endl;
        else if (a > b) cout<<"To the convention."<<endl;
        else if (a < b) cout<<"Left beehind."<<endl;
        else cout<<"Undecided."<<endl;
    }

    return 0;
}