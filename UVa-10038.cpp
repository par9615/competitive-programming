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

//Intento fallido 1
int main()
{

  int x;
  bool j;

  while(cin>>x)
  {
    int n[x];
    int s[x];
    j = true;
    memset(s, 0, sizeof(s));

    for(int i = 0; i < x; i++)
    {
      cin>>n[i];
    }

    FOR(i,0, x-1)
      s[abs(n[i]-n[i+1])] = 1;

    FOR(i, 1, x)
      if(s[i] != 1) j = false;


    if(j) cout<<"Jolly"<<endl;
    else cout<<"Not jolly"<<endl;
  }

  return 0;
}
/*
//Metodo del Mundo
int main()
{

  int x, n[3002], s[30002];


  while(cin>>x)
  {

    FOR(i, 0, x)
      cin>>n[i];

    FOR(i, 0, x-1)
      s[i] = abs(n[i]-n[i+1]);

    sort(s, s+x-1);

    if(s[x-1] == x-1) cout<<"Jolly"<<endl;
    else cout<<"Not jolly"<<endl;

  }



  return 0;
}*/
