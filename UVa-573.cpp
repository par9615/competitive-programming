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
  int ans;
  double d,h,u,f,rec,fati;

  while(cin>>h>>u>>d>>f, (h||u||d||f))
  {
    ans = 0;
    fati = (f/100)*u;
    rec = 0;


    while(true)
    {
      ans++;

      if(u > 0)
      rec += u;

      if(rec > h) break;
      rec -= d;
      if(rec < 0) break;
      u-=fati;
    }

    if(rec >= 0)cout<<"success on day "<<ans<<endl;
    else cout<<"failure on day "<<ans<<endl;

  }

  return 0;
}
