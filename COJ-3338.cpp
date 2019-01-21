#include <iostream>
#include <string>

using namespace std;

int main() {
    int cases;
    string a;
    string b;
    cin>>cases;
    int c = 0;
    cin.ignore();
    while(cases){

        getline(cin,a);
        getline(cin,b);

        cout<<++c<<" ";

        for(unsigned int i = 0; i < a.length(); i++){
        	if(a[i]==' ')cout<<" ";
        	else cout<<b[a[i]-'A'];

        }
        //1 JBYRJB: RYPBJP:
       cases--;
       cout<<endl;
    }
    return 0;
}
