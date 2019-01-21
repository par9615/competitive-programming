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

#define FOR(i, a , b) for(int i = int(a); i <= int(b); i++)

int main()
{
  int a,b,c,d, count, ans;
  ll op;

  while(cin>>a>>b)
  {
    c = min(a,b);
    d = max(a,b);
    ans = 0;

    FOR(i, c, d)
    {
      op = i;
      count = 1;

      while(op != 1)
      {
        if(op & 1)
        {
          op = (3 * op) + 1;
          op = op>>1;
          count+=2;
        }

        else
        {
          op = op>>1;
          count++;
        }
      }

      ans = max(ans,count);

      op = 0;
    }

    cout<<a<<" "<<b<<" "<<ans<<endl;
  }

  return 0;
}
