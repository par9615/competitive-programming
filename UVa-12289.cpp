#include<iostream>
#include<cmath>

using namespace std;

int main()
{
  int k;
  string s;

  cin>>k;

  while(k--)
  {
    cin>>s;

    if(s.length() > 3)
      cout<<3<<endl;

    else
    {
      if(s[0] == 'o' && s[2] == 'e') cout<<1<<endl;
      else if(s[0]== 'o' && s[1] == 'n')cout<<1<<endl;
      else if(s[1] == 'n' && s[2] == 'e')cout<<1<<endl;
      else if(s[0] == 't' && s[2] == 'o')cout<<2<<endl;
      else if(s[0] == 't' && s[1] == 'w')cout<<2<<endl;
      else cout<<2<<endl;
    }
  }


return 0;
}
