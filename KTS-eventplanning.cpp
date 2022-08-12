#include<iostream>
#include<climits>

using namespace std;

int main()
{
    int n, h, b, w, minc=INT_MAX;

    cin>>n>>b>>h>>w;

    int p, a;
    for(int i = 0; i < h; i++)
    {
        cin>>p;

        for(int j = 0; j < w; j++)
        {
            cin>>a;

            int c = p * n;

            if(a>=n && c <= b)
                minc = min(minc, c);
        }
    }


    if(minc != INT_MAX)
        cout<<minc<<endl;
    else
        cout<<"stay home"<<endl;

    return 0;
}