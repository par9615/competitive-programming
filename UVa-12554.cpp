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
  string raza[110],rola[] = {"Happy","birthday","to","you","Happy","birthday","to","you","Happy","birthday","to","Rujia","Happy","birthday","to","you"};
   int n;
   cin >> n;

   for(int i = 0; i < n; i++){
       cin >> raza[i];
   }

   int j = 0,k = 0,m = 1;

   if(n > 16)m = ceil(n/16)+1;

   for(int i = 0; i < m*16; i++,j++,k++){
       if(k == 16)k = 0;
       if(j == n)j = 0;
       cout << raza[j] << ": " << rola[k] << endl;
   }

  return 0;
}
