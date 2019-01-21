#include<iostream>
#include<cmath>
#include<set>

using namespace std;

int main()
{
  int k, w, n, s, c = 1;


  cin>>k;

  while(k--)
  {
    cin>>w;
    set<int> st;

    for(int i = 0 ; i < w; i++)
    {
      cin>>n>>s;

      st.insert(abs(n-s));

    }
    if(c > 1)cout<<endl;
    if(st.size()==1)cout<<"yes"<<endl;
    else cout<<"no"<<endl;


    c++;
  }

  return 0;
}
