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
  int l;
  string a,d;

  while(cin>>l, l)
  {
    a = "+x";
    FOR(i, 0, l-1)
    {
      cin>>d;
      if(d == "No") continue;

      if(a[1] == 'x' && d[0] == '-') a[0] = (a[0] == '+'? '-': '+');
      else if(a[1] == 'y' && d == "+y") a[0] = (a[0] == '+'? '-': '+');
      else if(a[1] == 'z' && d == "+z") a[0] = (a[0] == '+'? '-': '+');


      if(a[1] == 'x') a[1] = d[1];
      else if (a[1] == 'y' && d[1] == 'y') a[1] = 'x';
      else if (a[1] == 'z' && d[1] == 'z') a[1] = 'x';

    }

    cout<<a<<endl;
  }

  return 0;
}
