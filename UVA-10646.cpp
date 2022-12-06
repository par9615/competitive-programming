#include <iostream>
#include <vector>
#include <map>
using namespace std;

int get_value(char c)
{
    if(c == 'J' || c == 'Q' || c == 'K' || c == 'A')
        return 10;
    else
        return c-'0';
}

int main()
{
    int cards[52+5];
    string scards[52+5];

    int t;

    cin>>t;

    for(int j = 0; j < t; j++)
    {
        string card;

        // for(int i = 0; i < 52; i++)
        // {
        //     cin>>card;
        //     int v = get_value(card[0]);
        //     cards[i] = v;
        //     scards[i] = card;
        // }

        // int pos = 0;
        // int y = 0;

        // for(int i = 0; i < 3; i++)
        // {
        //     int x = cards[pos];
        //     y+=x;
        //     pos++;
        //     pos += (10-x);
        // }
        // cout<<"Case "<<j+1<<": ";
        // cout<<scards[pos+y-1]<<endl;

        for(int i = 0; i < 52; i++)
        {
            cin>>card;
            if(i == 32)
                cout<<"Case "<<j+1<<": "<<card<<endl;
        }

    }

    return 0;
}