#include<iostream>
#include<cmath>

using namespace std;

int main()
{
  int b, n, R[21], d, c, r, v;
  bool deb = false;

  while(cin>>b>>n, n||n)
  {
    for(int i = 0; i < b; i++)
    {
      cin>>r;

      R[i] = r;
    }

    for(int i = 0 ; i < n; i++)
    {
      cin>>d>>c>>v;

      R[d-1]-=v;
      R[c-1]+=v;

    }

    for(int i = 0; i < b; i++)
    {
      if(R[i] < 0) deb = true;

    }

    cout<<(deb?"N":"S")<<endl;
    deb = false;
  }

  return 0;
}
