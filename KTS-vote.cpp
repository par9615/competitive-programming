#include<iostream>
#include<climits>
#include<algorithm>

using namespace std;

int main()
{
    int t, n, c[10+5], v;
    int w, maxrv;
    bool equalWinners;


    cin>>t;

    while(t--)
    {
        cin>>n;

        v = 0;
        w = -1;
        maxrv = INT32_MIN;
        equalWinners = false;

        for(int i = 0; i < n; i++)
        {
            cin>>c[i];
            v += c[i];
        }


        for(int i = 0; i < n; i++)
        {
            if(c[i] > maxrv)
                w = i, maxrv = c[i], equalWinners = false;

            else if (c[i] == maxrv)
                equalWinners = true;
        }

        if(equalWinners)
            cout<<"no winner"<<endl;

        else
        {
            if(maxrv > (v/2))
                cout<<"majority winner "<<w+1<<endl;

            else
                cout<<"minority winner "<<w+1<<endl;
        }

    }

    return 0;
}