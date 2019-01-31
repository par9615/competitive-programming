#include <iostream>
#include <set>
using namespace std;

int main() {
   int n, m, x, total;
   set<int> cds;
   
   while(cin>>n>>m, n || m)
   {
       total = 0;
       cds.clear();
       
       for(int i = 0; i < n; i++)
        {
            cin>>x;
            cds.insert(x);
        }
       for(int i = 0; i < m; i++)
       {
           cin>>x;
           if(!cds.insert(x).second)
                total++;
       }
       
       cout<<total<<endl;
        
       
   }
   
}
