#include<iostream>
#include<cmath>

using namespace std;

int main()
{
  int ini, uno, dos, tres;

  cin>>ini>>uno>>dos>>tres;
  while(ini || uno || dos || tres)
  {
      cout<<1080 + ((ini-uno+40)%40 + (dos-uno+40)%40 + (dos-tres+40)%40) * 9<<endl;
      cin>>ini>>uno>>dos>>tres;
  }

return 0;
}
