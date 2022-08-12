#include<iostream>

using namespace std;


int main()
{
    int h, l, x, prev, curr, res = 0;

    while(cin>>h>>l, h||l)
    {
        res = 0;
        prev = h;

        for(int i = 0; i < l; i++)
        {
            cin>>x;
            res += max(0, x-prev);
            prev = x;
        }

        res += max(0, h-prev);
        cout<<res<<endl;

    }

    return 0;
}