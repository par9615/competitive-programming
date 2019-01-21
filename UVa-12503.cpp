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

#define FOR(i, a , b) for(int i = int(a); i <= int(b); i++)



int main()
{
  int a[101];
  int t, n, p = 0, x;
  string s,b;

  memset(a,0, sizeof(a));

  cin>>t;

  while(t--)
  {
    cin>>n;

    for(int i=1; i <= n; i++)
    {
      cin>>s;

      if(s == "LEFT"){ a[i] = -1; p--;}
      else if(s == "RIGHT") {a[i] = 1; p++;}
      else {
        cin>>b>>x;
        p+=a[x];
        a[i] = a[x];

      }


    }
    cout<<p<<endl;
    p = 0;
  }

  return 0;
}
