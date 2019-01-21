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
  int t, n, c = 1;
  int m, j, aux;

  cin>>t;

  while(t--)
  {
    cin>>n;

    m = j = 0;

    FOR(i, 0, n-1){
      cin>>aux;
      m += (aux/30) * 10 + 10;
      j += (aux/60) * 15 + 15;
    }

    cout<<"Case "<<c++<<": ";

    if(m < j) cout<<"Mile "<<m<<endl;
    else if(m > j) cout<<"Juice "<<j<<endl;
    else cout<<"Mile"<<" Juice "<<m<<endl;
  }

  return 0;
}
