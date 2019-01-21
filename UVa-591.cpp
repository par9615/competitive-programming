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
  int s[50], n, avg, ans, c=1;

  while(cin>>n, n)
  {
    avg = 0;
    ans = 0;

    FOR(i, 0, n)
    {
      cin>>s[i];
      avg += s[i];
    }
    avg/=n;

    FOR(i, 0, n)
    {
      if(avg < s[i])
        ans += s[i] - avg;
    }

    cout<<"Set #"<<c++<<endl;
    cout<<"The minimum number of moves is "<<ans<<".\n\n";
  }

  return 0;
}
