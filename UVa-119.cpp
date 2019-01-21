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
  int n,r,m,e,c = 1;
  string giver, receiver, s[12];
  msi people;

  while(cin>>n)
  {
    for(int i = 0; i < n; i++)
    {
      cin>>giver;
      s[i] = giver;
      people[giver] = 0;
    }

    for(int i = 0; i < n; i++)
    {
      cin>>giver>>m>>r;

      if(r != 0)
        e = m/r;


      for(int j = 0; j < r; j++)
      {
        cin>>receiver;
        people[receiver]+=e;
      }

      people[giver]-=e*r;

    }
    if(c++!=1)cout<<endl;

    for(int i = 0; i < n; i++)
    {
      cout<<s[i]<<" "<<people[s[i]]<<endl;
    }

    people.clear();

  }

  return 0;
}
