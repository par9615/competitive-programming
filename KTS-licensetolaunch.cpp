#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int n, x, mini, minv=INT_MAX;

    cin>>n;

    for(int i=0; i < n; i++)
    {
        cin>>x;
        
        if(x < minv)
            minv = x, mini=i;
    }

    cout<<mini<<endl;
    return 0;
}