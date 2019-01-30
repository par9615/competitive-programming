#include <iostream>
using namespace std;

//anti clockwise
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, -1, 0, 1};

int main()
{
    int sz, p, x, y;

    while(cin>>sz>>p, sz || p)
    {
        x = y = 0;
        int dir;
        for(int i = 0; i < sz*sz; i++)
        {
            for(int j = 0; j < 2; j++)
            {
                for(int k = 0; k < i*j; k++)
                {
                    cout<<k+i<<endl;

                }
            }
        }

        cout<<x<<" "<<y<<endl;


    }

    return 0;
}