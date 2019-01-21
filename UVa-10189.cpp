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
  int n, m, a[105][105], c = 1;
  char x;
  while(cin>>n>>m, n||m)
  {

    memset(a, 0, sizeof(a[0][0])*105*105);

    FOR(i, 0, n + 2)
    {
      FOR(j, 0, m + 2)
      {
        if(i == 0 || i == n + 1 || j == 0 || j == m + 1)
          a[i][j] = -1;
        else
        {
          cin>>x;
          if(x == '*') a[i][j] = -1;
        }
      }
    }

    FOR(i, 1 , n + 1)
    {
      FOR(j, 1, m + 1)
      {
          if(a[i][j] == -1)
          {
            if(a[i-1][j] != -1) a[i-1][j]++;
            if(a[i][j+1] != -1) a[i][j+1]++;
            if(a[i+1][j] != -1) a[i+1][j]++;
            if(a[i][j-1] != -1) a[i][j-1]++;

            if(a[i-1][j+1] != -1) a[i-1][j+1]++;
            if(a[i+1][j+1] != -1) a[i+1][j+1]++;
            if(a[i+1][j-1] != -1) a[i+1][j-1]++;
            if(a[i-1][j-1] != -1) a[i-1][j-1]++;
          }
      }

    }

    if(c > 1)cout<<endl;

    cout<<"Field #"<<c++<<":"<<endl;

    FOR(i, 1, n + 1)
    {
      FOR(j, 1, m + 1)
      {
        if(a[i][j] == -1) cout<<"*";
        else              cout<<a[i][j];
      }
      cout<<endl;
    }



  }


  return 0;
}
