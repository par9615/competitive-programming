#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isValid(string s)
{
    int len = s.length();
    for(int i = 0; i < len-1; i++)
        if(s[i+1] != s[i]+1)
            return false;
    
    return true;
}

int main()
{
    vector<string> substrings;
    string word, ans;
    int n, len;     

    cin>>n;

    while(n--)
    {
        cin>>word;
        len = word.length();

        ans = "";
        substrings.clear();

        for(int i = 0; i < len; i++)
            for(int j = 1; j <= len - i; j++)
            {
                string sub = word.substr(i,j);
                
                if(isValid(sub))
                    substrings.push_back(word.substr(i,j));
            }
        sort(substrings.begin(), substrings.end());
        
        for(auto e: substrings)
            if(e.length() > ans.length())
                ans = e;

        cout<<ans<<endl;
    }

    return 0;
}