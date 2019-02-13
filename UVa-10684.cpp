#include <iostream>
using namespace std;

int main()
{
    int n, ans, st;

    while(cin>>n, n)
    {
        ans = 0;
        st = 0;
        int x;
        for(int i = 0; i < n; i++)
        {
            cin>>x;
            st+=x;

            if(st >= 0)
                ans = max(ans, st);
            else
                st = 0;
           
        }

        if(ans)
            cout<<"The maximum winning streak is "<<ans<<"."<<endl;
        else
            cout<<"Losing streak."<<endl;
    }
    return 0;
}