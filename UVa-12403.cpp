#include<iostream>
#include<cmath>

using namespace std;

int main()
{

  int t, total = 0, donation;
  string operation;
  cin>>t;

  while(t--)
  {
    cin>>operation;

    if(operation  == "donate")
    {
      cin>>donation;
      total = total + donation;
    }

    else
      cout<<total<<endl;
  }

return 0;
}
