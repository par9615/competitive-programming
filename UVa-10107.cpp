#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n, i = 0, numbers[10000+5];
    vector<int> v;
    
    while(cin>>n)
    {
        i++;
        v.push_back(n);
        sort(v.begin(), v.end());
        
        if(!(i&1))
            cout<<(v[i/2]+v[i/2-1])/2<<endl;
        else
            cout<<v[i/2]<<endl;
    }

    return 0;
}
