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

  int t, n, ans, x, c = 1;

  cin>>t;

  while(t--)
  {
    ans = 0;
    cin>>n;

    FOR(i, 0, n-1)
    {
      cin>>x;

      ans = max(ans, x);

    }

    cout<<"Case "<<c++<<": "<<ans<<endl;

  }

  return 0;
}
