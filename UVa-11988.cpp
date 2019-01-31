#include <iostream>
#include <list>
using namespace std;

int main() {
    list<char> output;
    string s;
    bool h;
    
    while(cin>>s)
    {
        h = false;
        output.clear();
        
        string aux = "";
        for(auto e: s)
        {
            if(e == '[')
            {
                h = true;
                for(auto c: aux)
                    output.push_front(c);
                aux = "";
                continue;
            }
            if(e == ']')
            {
                h = false;
                
                for(auto c: aux)
                    output.push_front(c);
                
                aux = "";
                continue;
            }
            
            if(h)
                aux=e + aux;
            else
                output.push_back(e);
        }
        
        for(auto c: aux)
            output.push_front(c);
        
        for(auto e: output)
            cout<<e;
        cout<<endl;
        
    }
    
    return 0;
}
