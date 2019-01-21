#include<iostream>
#include<cmath>

using namespace std;

int main()
{
  int n, x, supposed, given,c = 1;
  cin>>n;
  while(n != 0)
  {
    supposed = 0;
    given = 0;
    while(n--)
    {
      cin>>x;

      if(x == 0) given++;
      else  supposed++;
    }

    cout<<"Case "<< c++ <<": "<<supposed-given<<endl;
    cin>>n;
  }

return 0;
}
