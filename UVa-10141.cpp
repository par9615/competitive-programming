#include<iostream>
#include<fstream>
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
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  //ofstream file;
  //file.open("out.txt");

  int n,p,req, maxC, c = 1;
  double price, minP;
  string aux, ans, name;

  while(cin>>n>>p, n||p)
  {
    ans = "";
    maxC = -99999999;
    minP = 99999999;

    cin.ignore();
    FOR(i, 0, n)
    {
      getline(cin, aux);
    }

    FOR(i, 0, p)
    {
      getline(cin, name);
      cin>>price>>req;

      cin.ignore();

      FOR(j, 0, req)
      {
        getline(cin, aux);
      }

      if((req > maxC) || (req == maxC && price < minP))
      {
        maxC = req;
        minP = price;
        ans = name;
      }

    }

    if(c>1) cout<<endl;
    cout<<"RFP #"<<c++<<endl;
    cout<<ans<<endl;

  }
  //file.close();
  return 0;
}
