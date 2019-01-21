#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, d, ans, k, p[1000+10];
    string t;

    cin>>k;

    while(k--)
    {
        cin>>n>>d>>t;
        ans = 0;

        for(int i = 0; i < n; i++)
            cin>>p[i];

        sort(p, p+n);

        if(t == "regulate")
            for(int i = 0; i < d; i++)
                ans += p[n-1-i];
        
        else
            for(int i = 0; i < d; i++)
                ans += p[i];

        cout<<ans<<endl;

    } 

    return 0;
}