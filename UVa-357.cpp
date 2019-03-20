#include <iostream>
using namespace std;

int main()
{
    int n, c[5]={1, 5, 10, 25, 50};
    unsigned long long w[30001]={0};
    
    w[0] = 1;
    
    for(int i = 0; i < 5; i++)
    {
        for(int j = c[i]; j < 30001; j++)
        {
            w[j] += w[j - c[i]];
        }
    }

    while(cin>>n)
    {
        if(w[n]>1)
            cout<<"There are "<<w[n]<<" ways to produce "<<n<<" cents change."<<endl;
        else
            cout<<"There is only 1 way to produce "<<n<<" cents change."<<endl;
    }
    
    return 0;
}
