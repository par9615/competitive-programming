#include<iostream>
#include<cmath>
#include<map>
#include<vector>
#include<algorithm>
#include<utility>
#include<set>
#include<cctype>
#include<cstring>

using namespace std;

typedef long long         ll;
typedef vector<int>       vi;
typedef pair<int, int>    ii;
typedef set<int>          si;
typedef map<string, int>  msi;

#define FOR(i, a , b) for(int i = int(a); i < int(b); i++)

int main()
{
  int t, memo[102], p, c = 1;
  string s;
  cin>>t;

  while(t--)
  {
    p = 0;
    memset(memo, 0, sizeof(memo));
    cin>>s;

    FOR(i, 0, s.length())
    {
      if(s[i] == '<') p = (p - 1 + 100) % 100;
      if(s[i] == '>') p = (p + 1) % 100;
      if(s[i] == '+') memo[p] = (memo[p] + 1) % 256;
      if(s[i] == '-') memo[p] = (memo[p] - 1 + 256) % 256;

    }

    cout<<"Case "<<c++<<":";
    FOR(i, 0, 100)
    {
      printf(" %02X", memo[i]);//con cout?
    }
    cout<<endl;
  }

  return 0;
}
