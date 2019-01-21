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
  int s, b, l, r;
  int left[100005], right[100005];

  while(cin>>s>>b, s||b)
  {
    FOR(i,0, s+1)
    {
      left[i] = i - 1;
      right[i] = i + 1;
    }

    while(b--)
    {
      cin>>l>>r;
      if(left[l] < 1) cout<<"* ";
      else cout<<left[l]<<" ";

      if(right[r] > s) cout<<"*"<<endl;
      else cout<<right[r]<<endl;

      left[right[r]] = left[l];
      right[left[l]] = right[r];

    }
    cout<<"-"<<endl;
  }

  return 0;
}
