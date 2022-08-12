#include<iostream>

using namespace std;


int main()
{
    int n, m, x, minv=999999999, res=0, tea[1000+5]={0}, top[1000+5]={0};

    cin>>n;

    for(int i = 0; i < n; i++)
        cin>>tea[i];

    cin>>m;

    for(int i = 0; i < m; i++)
        cin>>top[i];


    int k, p;

    for(int i = 0; i < n; i++)
    {

        cin>>k;
        for(int j = 0; j < k; j++)
        {
            cin>>p;
            int value = tea[i] + top[p-1];

            minv = min(minv, value);
        }

    }
    cin>>x;

    res = (x/minv) - 1;

    cout<<(res < 0? 0 : res)<<endl;

    return 0;
}