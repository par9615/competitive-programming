#include<iostream>

using namespace std;

int main()
{
  int k,n,m;

  cin>>k;

  while(k--)
  {
    cin>>n>>m;
    cout<<(((n-2)/3) + ((n-2)%3?1:0))*(((m-2)/3) + ((m-2)%3?1:0))<<endl;
  }

  return 0;
}
