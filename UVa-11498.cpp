#include<iostream>

using namespace std;

int main(){

  int k, n, m, x, y;

  cin>>k;

  while(k)
  {
    cin>>n>>m;

    while(k--)
    {
      cin>>x>>y;

      if(x == n || y == m)  cout<<"divisa"<<endl;
      if(x < n && y > m) cout<<"NO"<<endl;
      if(x < n && y < m)  cout<<"SO"<<endl;
      if(x > n && y < m) cout<<"SE"<<endl;
      if(x > n && y > m) cout<<"NE"<<endl;


    }

    cin>>k;
  }
return 0;
}
