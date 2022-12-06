#include <iostream>

using namespace std;

int main()
{
    int t, k;

    cin>>t;

    while(t--)
    {
        cin>>k;
        int res = 0, x;

        for(int i = 0; i < k; i++)
        {
            cin>>x;
            res += x;
        }

        cout<<res-(k-1)<<endl;

    }
    return 0;
}