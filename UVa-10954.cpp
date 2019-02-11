#include <iostream>
#include <queue>
#include <vector>
using namespace std;

class Comparator
{
    public:
        bool operator()(int a, int b)
        {
            return a > b;
        }
};

int main() 
{
    int n, aux, ans;
    priority_queue<int, vector<int>, Comparator> q;
    
    while(cin>>n, n)
    {
        ans = aux = 0;
        int x;
        for(int i = 0; i < n; i++)
        {
            cin>>x;
            q.push(x);
        }
        
        while(q.size() != 1)
        {
            aux = q.top();
            q.pop();
            
            aux += q.top();
            q.pop();
            
            ans += aux;
            q.push(aux);
    
        }
        
        cout<<ans<<endl; 
        
        q.pop();
    }
}
