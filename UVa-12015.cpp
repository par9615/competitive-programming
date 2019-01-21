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
  string s[11];
  int t, r[11], greatest, c = 1;

  cin>>t;

  while(t--)
  {


    greatest = 0;

    FOR(i, 0, 9)
    {
      cin>>s[i]>>r[i];

      greatest = max(greatest, r[i]);
    }

    cout<<"Case #"<<c++<<":"<<endl;

    FOR(i, 0, 9)
    {
      if(r[i] == greatest)
        cout<<s[i]<<endl;
    }

  }




  return 0;
}
