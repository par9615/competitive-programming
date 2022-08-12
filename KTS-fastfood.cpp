#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main()
{
    int rewards[10+5];
    int stickers[30+5];

    int t, n, m, k, res;

    cin>>t;

    while(t--)
    {
       vector<vector<int>> prizes;
       cin>>n>>m;
       res = 0;

       for(int i = 0; i < n; i++)
       {
           vector<int> aux;
           int reward;
           cin>>k;

           for(int j = 0; j < k; j++)
           {
               int x;
               cin>>x;
               aux.push_back(x);
           }
           cin>>reward;

           prizes.push_back(aux);
           rewards[i] = reward;
       }

       for(int i = 0; i < m; i++)
        cin>>stickers[i];

       for(int i = 0; i < prizes.size(); i++)
       {
           int mini = -1, minv = INT_MAX;

           for(auto e: prizes[i])
           {
               if(stickers[e-1] < minv)
                mini = e, minv = stickers[e-1];
           }

           res += rewards[i] * minv;
       }

       cout<<res<<endl;

    }

    return 0;
}