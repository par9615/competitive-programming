#include<iostream>
#include<cmath>
#include<algorithm>

using namespace std;

int main()
{
  int t, a[3], c = 1;

  cin>>t;

  while (t--) {
    cin>>a[0]>>a[1]>>a[2];
    sort(a,a+3);

    cout<<"Case "<<c++<<": "<<a[1]<<endl;
  }

return 0;
}
