#include<iostream>
#include<cmath>
#include <map>

using namespace std;

int main()
{
  string s;
  int c = 1;

  map<string,string> m = {
    {"HELLO", "ENGLISH"},
    {"HOLA", "SPANISH"},
    {"HALLO", "GERMAN"},
    {"BONJOUR", "FRENCH"},
    {"CIAO", "ITALIAN"},
    {"ZDRAVSTVUJTE", "RUSSIAN"}
  };

  cin>>s;
  while(s != "#")
  {
    if(m[s] != "")
    cout<<"Case "<<c++<<": "<<m[s]<<endl;

    else
      cout<<"Case "<<c++<<": "<<"UNKNOWN"<<endl;
    cin>>s;

  }

return 0;
}
