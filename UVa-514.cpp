#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main()
{
    int n, a, count = 0;
    stack<int> in, aux;
    vector<int> out;

    while(cin>>n, n)
    {
        while(cin>>a, a)
        {
            out.clear();
            in.push(a);
            for(int i = 0; i < n-1; i++)
            {
                cin>>a;
                in.push(a);
            }

            int next;
            aux.push(in.top());
            in.pop();
            while(!in.empty())
            {
                next = in.top();
                in.pop();

                if(!aux.empty())
                {
                    if(next < aux.top())
                    {
                        while(!aux.empty() && aux.top() > next)
                        {
                            out.push_back(aux.top());
                            aux.pop();
                        }
                    }
                    
                }
                    aux.push(next);
            }

            while(!aux.empty())
                out.push_back(aux.top()), aux.pop(); 
            
            bool ans = true;
            for(int i = 1; i < out.size(); i++)
                if(out[i-1]-out[i] != 1)
                    ans = false;
            
            cout<<(ans? "Yes" : "No")<<endl;
        }

        cout<<endl;

    }

    return 0;
}