#include<iostream>
#include<cmath>

using namespace std;

int main()
{
  string s;
  int c = 1;
  cin>>s;

  while(s != "*")
  {
    cout<<"Case "<<c++<<": ";
    if(s == "Hajj") cout<<s<<"-e-Akbar"<<endl;
    else cout<<"Hajj-e-Asghar"<<endl;

    cin>>s;
  }

return 0;
}
