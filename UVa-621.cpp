#include<iostream>
#include<cmath>
#include<string>

using namespace std;

int main()
{
  string s;
  int k;

  cin>>k;

  while(k--)
  {
    cin>>s;

    if(s == "1" || s == "4" || s == "78") cout<<"+"<<endl;
    else if(*(s.end()-1) == '5' && *(s.end() - 2) == '3') cout<<"-"<<endl;
    else if(s[0] == '9' && *(s.end() - 1) == '4') cout<<"*"<<endl;
    else cout<<"?"<<endl;

  }



  return 0;
}
