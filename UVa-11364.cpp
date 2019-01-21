#include<iostream>
using namespace std;

int main()
{
  int k, n, l, r, pos;


  cin>>k;

  while(k--)
  {
    l = 1000000000;
    r = -1000000000;

    cin>>n;

    for(int i = 0; i < n; i++)
    {
      cin>>pos;

      if(pos > r)
        r = pos;

      if(pos < l)
        l = pos;
    }

    cout<<2 * (r-l)<<endl;

  }
return 0;
}
