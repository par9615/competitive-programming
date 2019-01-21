#include<iostream>
#include<cmath>

using namespace std;

/*Primera vez
#define chingo 2000000000

int main()
{
  int n, b, h, w, p, a;
  int ans;
  while(cin>>n>>b>>h>>w)
  {
    ans = chingo;
    for(int i = 0; i < h; i++)
    {
      cin>>p;

      for(int j = 0; j < w; j++)
      {
        cin>>a;

        if(a >= n)
        {
          ans = min(ans, p*n);
          string s;
          getline(cin, s);
          break;
        }



      }

    }

    if(ans <= b)cout<<ans<<endl;
    else cout<<"stay home"<<endl;

    ans = chingo;

  }

  return 0;
}*/

/*Segunda vez*/

int main()
{

  int n, b, h, w, p, a, ans;
  string s;

  while(cin>>n>>b>>h>>w)
  {

    ans = 2000000000;


    for(int i = 0; i < h; i++)
    {
      cin>>p;

      for(int j = 0; j < w; j++)
      {
        cin>>a;
        if (a >= n)
        {
        ans = min(ans, (p*n));
        getline(cin, s);
        break;
        }

      }

    }

    if(ans <= b) cout<<ans<<endl;
    else cout<<"stay home"<<endl;

    ans = 2000000000;
  }

  return 0;
}
