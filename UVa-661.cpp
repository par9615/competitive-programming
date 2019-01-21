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

  int n, m, c, amp[22], use[22], ans, dev, sum, count = 1;

  while(cin>>n>>m>>c, (n||m||c))
  {
    ans = 0;
    sum = 0;
    FOR(i, 0, n)
    {
      cin>>amp[i];
      use[i] = 0;
    }

    FOR(i, 0, m)
    {
      cin>>dev;
      if(use[dev-1] == 0)
      {
        use[dev-1] = 1;
        sum += amp[dev-1];
      }

      else
      {
        use[dev-1] = 0;
        sum -= amp[dev-1];
      }

      ans = max(ans, sum);

    }


    cout<<"Sequence "<<count++<<endl;

    if(ans > c)cout<<"Fuse was blown.\n\n";
    else cout<<"Fuse was not blown.\nMaximal power consumption was "<<ans<<" amperes.\n\n";
  }

  return 0;
}
