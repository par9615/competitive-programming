#include<iostream>
#include<cmath>

using namespace std;

int main()
{
  int k,n,ans;

  cin>>k;

  while(k--)
  {
    cin>>n;

    ans = (((n * 567)/9 + 7492) * 235) / 47 - 498;

    ans = ans / 10;
    ans = ans % 10;


    cout<<abs(ans)<<endl;

  }

return 0;
}
