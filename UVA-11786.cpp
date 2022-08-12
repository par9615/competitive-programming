#import <iostream>
#import <stack>

using namespace std;

int main()
{
    string s;
    int t, res;


    cin>>t;

    while(t--)
    {
        stack<int> st;
        res = 0;
        cin>>s;

        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == '\\')
            {
                st.push(i);
            }

            else if (s[i] == '/' && !st.empty())
            {
                int prev = st.top();
                st.pop();
                res += i - prev;
            }
        }

        cout<<res<<endl;

    }

    return 0;
}