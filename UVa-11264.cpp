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
  int k;
  int c[1005];
  int count, n;
  cin>>k;

  while(k--)
  {
    cin>>n;
    count = 1;
    memset(c, 0, sizeof(c));

    FOR(i, 0, n)
    {
      cin>>c[i];

    }

    int max = c[n-1];

    for(int i = n-2; i >= 0; i--)
    {
      if((max - c[i]) >= 0)
      {
        max-=c[i];
        count++;
      }

    }

    cout<<count<<endl;
  }

  return 0;
}
