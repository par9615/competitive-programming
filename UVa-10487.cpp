#include <iostream>
using namespace std;

int main()
{
    int n, q, a[1000], count = 0;

    while(cin>>n, n)
    {
        cout<<"Case "<<++count<<":"<<endl;
        for(int i = 0; i < n; i++)
            cin>>a[i];

        cin>>q;
        int x, ans;
        for(int i = 0; i < q; i++)
        {
            ans = 999999;
            cin>>x;

            for(int j = 0; j < n; j++)
            {
                for(int k = j+1; k < n; k++)
                {
                    if(abs((a[j]+a[k])-x) < abs(ans-x))
                        ans = a[j]+a[k];
                }
            }

            cout<<"Closest sum to "<<x<<" is "<<ans<<"."<<endl;
        }

    }
    return 0;
}