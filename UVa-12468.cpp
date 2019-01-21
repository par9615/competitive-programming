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
  int a, b, ans;

  while(cin>>a>>b, a >= 0)
  {
    ans = abs(a - b);

    if(abs(ans) > 50)
      ans = 100 - ans;

    cout<<ans<<endl;
  }

  return 0;
}
