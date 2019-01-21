#include<iostream>
#include<cmath>

using namespace std;

int main()
{
  int t, l, w, h, c = 1;

  cin>>t;

  while (t--) {
    cin>>l>>w>>h;

    if(l <= 20 && w <= 20 && h <= 20)
      cout<<"Case "<<c++<<": "<<"good"<<endl;

    else
        cout<<"Case "<<c++<<": "<<"bad"<<endl;
  }

  return 0;
}
