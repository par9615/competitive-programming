#include <iostream>
#include <string.h>
#include <cmath>
using namespace std;

char ans[80+5];

int main()
{
    string s;
    int n, len;

    cin>>n;

    while(n--)
    {
        memset(ans, 0, sizeof(ans));

        for(int i = 0; i < 10; i++)
        {
            cin>>s;
            len = s.length();

            if(i == 0 || i == 9)
                continue;
            
            for(int j = 0; j < len; j++)
            {
                if(j == 0 || j == len-1)
                    continue;                               

                if(s[j] == '\\')
                    ans[j]+=pow(2,i-1);

            }

        }


        for(int i = 1; i < len-1; i++)
            cout<<ans[i];
        cout<<endl;

    }

    return 0;
}