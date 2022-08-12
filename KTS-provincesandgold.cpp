#include <iostream>

using namespace std;

int main()
{
    int g, s, c, p;
    string v, t;

    cin>>g>>s>>c;

    p = 3*g + 2*s + c;

    if(p > 7)
        v = "Province";
    else if (p > 4)
        v = "Duchy";
    else if (p > 1)
        v = "Estate";

    if(p > 5)
        t = "Gold";
    else if(p > 2)
        t = "Silver";
    else
        t = "Copper";

    if(v != "")
    {
        cout<<v<<" or ";
    }

    cout<<t<<endl;

    return 0;
}