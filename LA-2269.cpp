#include <iostream>
#include <string>
#include <sstream>
#include <set>

using namespace std;

#define SIZE 105

int M[SIZE][SIZE], m, n;
set<int> ans;

void search(int u, int a)
{
    for(int i = 0; i <= m; i++)
        if(M[u][i] == a)
        {
            ans.insert(i);
            search(i, a);
        }
}

int main() {
    int u, a, v, count;
    string line;
    
    
    while(cin>>m>>n)
    {
        
        for(int i = 0; i < SIZE; i++)
            for(int j = 0; j < SIZE; j++)
                M[i][j] = -1;
        
        cin.ignore();
        while(true)
        {
            getline(cin, line);
            //cout<<line<<endl;
            stringstream ss(line);
            
            ss>>u>>a;
            
            count = 0;
            while(ss>>v)
                M[u][v] = a, count++;
            
            if(count == 0)
            {
                search(u, a);
                
                if(ans.size() != 0)
                {
                    int juas = 0;
                    for(auto e: ans)
                    {
                        if(juas != 0)
                            cout<<" ";
                        cout<<e;
                        juas++;
                    }
                    cout<<endl;
                }
                else {
                    cout<<"There are no possible destinations through this airline"<<endl;
                }
                ans.clear();
                break;
            }
        }
        
        
        /*for(int i = 0; i < 20; i++)
        {
            for(int j = 0; j < 20; j++)
                cout<<M[i][j]<<" ";
            cout<<endl;
        }*/
        
    }
    
    
    
    
    
    return 0;
}
