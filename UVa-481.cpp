#include <iostream>

using namespace std;
int a[1000000], back[1000000], backi[1000000], p[1000000], L, Li;

void print(int index)
{
    if(index < 0)
        return;

    print(p[index]);
    
    cout<<a[index]<<endl;
    
}

int main(){
	
    int i = 0;
    
    L = Li = 0;
    while(cin>>a[i])
    {
        int pos = lower_bound(back, back+L, a[i])-back;
        back[pos] = a[i];
        backi[pos] = i;
        p[i] = pos>0? backi[pos-1] : -1;
        if(pos == L)
        {
            L++;
            Li = i;
        }
        
        i++;
    }
    
    cout<<L<<"\n-\n";
    print(Li);
    
}
