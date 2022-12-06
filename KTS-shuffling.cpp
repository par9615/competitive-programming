#include <iostream>

using namespace std;

string shuffle(string c, string t)
{
    int len = c.length();
    int mid = len/2;
    int dm = 0;
    bool side = 0;

    if(t == "in")
        side = 1;
    
    if(t == "out" && (len&1))
        dm++;


    string halfs[2];

    halfs[0] = c.substr(0, mid+dm);
    halfs[1] = c.substr(mid+dm);

    // cout<<"MID "<<mid<<endl;
    // cout<<"HALF1 "<<halfs[0]<<endl;
    // cout<<"HALF2 "<<halfs[1]<<endl;

    string res="";
    for(int i = 0; i < mid; i++)
    {
        res+=halfs[side][i];
        res+=halfs[!side][i];
    }

    if(len&1)
        res+=halfs[side][mid];

    return res;
}


int main()
{
    bool side;
    int n, len, mid;
    string s="", t;

    cin>>n>>t;

    for(int i = 0; i<n; i++)
        s += 'A'+i;


    int res=1;

    string c = s;
    c = shuffle(c, t);

    while(c != s)
    {
        c = shuffle(c, t);
        res++;
    }

    cout<<res<<endl;

}