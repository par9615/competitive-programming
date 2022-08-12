#include <iostream>
#include <vector>
using namespace std;


int main()
{
    vector<string> res;
    int r;

    cin>>r;

    while(r--)
    {
        int k;
        string name, m;
        bool soup = false, pan = false;

        cin>>k;
        cin.ignore();

        getline(cin, name);

        for(int i = 0; i < k; i++)
        {
            getline(cin, m);

            if(m == "pea soup")
                soup = true;

            else if(m == "pancakes")
                pan = true;
        }

        if(soup && pan)
            res.push_back(name);

    }


    if(res.empty())
        cout<<"Anywhere is fine I guess"<<endl;
    else
    {
        cout<<res[0]<<endl;
    }


    return 0;
}