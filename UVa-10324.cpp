#include<iostream>
#include<cmath>
#include<map>
#include<vector>
#include<algorithm>
#include<utility>
#include<set>
#include<cctype>

using namespace std;

typedef long long         ll;
typedef vector<int>       vi;
typedef pair<int, int>    ii;
typedef set<int>          si;
typedef map<string, int>  msi;

#define FOR(i, a , b) for(int i = int(a); i < int(b); i++)

int main()
{
  string s;
  int a, b, n, u, d, c = 1;
  char x;

  while(cin>>s)
  {
    cin>>n;
    cout<<"Case "<<c++<<":"<<endl;
    FOR(i, 0, n)
    {
      cin>>a>>b;
      u = max(a,b);
      d = min(a,b);

      x = s[d];

      while(true)
      {
        d++;
        if(d > u){ cout<<"Yes"<<endl; break;}
        if(s[d] != x){cout<<"No"<<endl; break;}


      }

    }

  }


  return 0;
}
