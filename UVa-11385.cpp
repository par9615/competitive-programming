#include <iostream>
#include <string.h>
using namespace std;

int binary(long long *a, int l, int r, long long val)
{
    if(r < l)
        return -1;
    
    int m = l +(r-l)/2;
    
    if(val == a[m])
        return m;    
    else if(val < a[m])
        return binary(a, l, m-1, val);    
    else
        return binary(a, m+1, r, val);
}

int main()
{
    string s, letters;
    long long code[100+5], fib[50+5];
    char ans[100+5];
    int t, n, maxi;

    fib[0] = 0, fib[1] = 1;
    for(int i = 2; i < 50; i++)
        fib[i] = fib[i-2] + fib[i-1];

        

    cin>>t;
    while(t--)
    {
        letters = "";
        maxi = -1;
        memset(ans, 0, sizeof(ans));

        cin>>n;
        for(int i = 0; i < n; i++)
            cin>>code[i];        

        cin.ignore(100, '\n');
        getline(cin, s);
      
        for(int i = 0; i < s.length(); i++)
            if(s[i] >= 'A' && s[i] <= 'Z')
                letters += s[i];

        int pos = -1; 
        for(int i = 0; i < n; i++)
        {
            pos = binary(fib, 0, 49, code[i]);            
            if(pos != -1)
                ans[pos] = letters[i], maxi = max(maxi, pos);
        }
        for(int i = 2; i <= maxi; i++)
            if(ans[i] != 0)
                cout<<ans[i];
            else
                cout<<" ";
        cout<<endl;


    }

    return 0;
}