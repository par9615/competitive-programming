#include <iostream>
using namespace std;


int main()
{
    int t, a=0;
    double l, w, d, kg;
    bool ans;

    cin>>t;

    while(t--)
    {
        cin>>l>>w>>d>>kg;
        ans = true;

        if((l>56 || w>45 || d>25) && ((l+w+d) > 125))
            ans &= false;
        if(kg > 7)
            ans &= false;

        if(ans)
            a++;
        cout<<ans<<endl;

    }

    cout<<a<<endl;

    return 0;
}