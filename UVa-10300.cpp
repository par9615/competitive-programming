#include<iostream>
#include<cmath>

using namespace std;

int main()
{
  int n, f, size, animals, premium, suma = 0;

  cin>>n;

  while(n--)
  {
    cin>>f;

    for(int i = 0; i < f; i++)
    {
      cin>>size>>animals>>premium;

      suma+=size*premium;
    }

    cout<<suma<<endl;
    suma = 0;
  }

  return 0;
}
