#include<iostream>
using namespace std;

int main()
{
  int k, a, b;

  cin>>k;

  while(k--)
  {
    cin>>a>>b;

    if(a == b)  cout<<"="<<endl;
    else if(a > b)  cout<<">"<<endl;
    else  cout<<"<"<<endl;
  }

return 0;
}
