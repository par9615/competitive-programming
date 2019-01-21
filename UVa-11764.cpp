#include<iostream>
#include<cmath>

using namespace std;




int main()
{
  int t, high, low, w, n, actual, ant, c = 1;


  cin>>t;

  while(t--)
  {
    high = 0;
    low = 0;
    
    cin>>n;

    cin>>ant;
    for(int i = 0; i < n-1; i++)
    {
      cin>>actual;

      if(actual > ant) high++;
      else if(actual < ant) low++;

      ant = actual;
    }

    cout<<"Case "<<c++<<": "<<high<<" "<<low<<endl;

  }

  return 0;
}
