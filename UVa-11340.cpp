#include<iostream>
#include<cmath>
#include<map>
#include<vector>
#include<algorithm>
#include<utility>
#include<set>
#include<cctype>
#include<cstring>
#include<iomanip>

using namespace std;

typedef long long         ll;
typedef vector<int>       vi;
typedef pair<int, int>    ii;
typedef set<int>          si;
typedef map<string, int>  msi;

#define FOR(i, a , b) for(int i = int(a); i < int(b); i++)

int main()
{

  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t,n,r;
  unsigned char x;
  double c, a[300], ans;
  string l;

  cin>>t;

  while(t--)
  {
    cin>>n;
    cin.ignore();
    memset(a, 0, sizeof(a));
    ans = 0;

    while(n--)
    {
      cin>>x>>c;
      cin.ignore();
      a[(int)x] = c/100;
    }

    cin>>r;
    cin.ignore();
    for(int i = 0; i < r; i++)
    {
      getline(cin, l);
      for(unsigned char j: l)
      {        
        ans+=a[(int)j];
      }
    }

    printf("%.2f$\n", ans);

  }

  return 0;
}
