#include <iostream>
#include <map>
#include <iomanip>
using namespace std;

int main() {
    map<string, double> trees;
    int n;
    double total;
    string s;
    
    cin>>n;
    cin.ignore();
    cin.ignore();
    while(n--)
    {
        
        total = 0;
        trees.clear();
        
        while(getline(cin, s), s != "")
            trees[s]++, total++;
        
        for(auto e: trees)    
            cout<<e.first<<" "<<fixed<<setprecision(4)<<100*(e.second/total)<<endl;
            
        if(n)
            cout<<endl;
    }
}
