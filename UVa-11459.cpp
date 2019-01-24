#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int main() {

    int a,b,c,t,sal[100+5],players[1000000+5];
    int finished;
    cin>>t;
    
    while(t--)
    {
        memset(players, 0, sizeof(players));
        memset(sal, 0, sizeof(sal));
        finished = 0;
        
        cin>>a>>b>>c;
        
        int start, end;
        for(int i = 0; i < b; i++)
        {
            cin>>start>>end;
            sal[start-1] = end-1;
        }
        
        int x;
        for(int i = 1; i <= c; i++)
        {
            cin>>x;
            
            if(finished)
                continue;
            
            int index = i%a;
            if(index==0) index = a;
            
            players[index]+=x;
   
            if(sal[players[index]] != 0)
                players[index] = sal[players[index]];
            
            if(players[index] >= 99)
                finished = 1, players[index] = 99;
            
        }
        
        for(int i = 1; i <= a; i++)
            cout<<"Position of player "<<i<<" is "<<players[i]+1<<"."<<endl;
        
    }
    
    return 0;
}
