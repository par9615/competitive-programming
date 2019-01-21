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
  int n, ant, actual;
  bool asc, desc;

  cin>>n;
  cout<<"Lumberjacks:"<<endl;

  while(n--)
  {
    asc = desc = false;

    cin>>ant;
    FOR(i, 0, 8)
    {
      cin>>actual;

      if(ant < actual)  asc = true;
      else              desc = true;

      ant = actual;
    }

    if(asc && desc) cout<<"Unordered"<<endl;
    else cout<<"Ordered"<<endl;

  }


  return 0;
}
