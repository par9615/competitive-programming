#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, m, diff;
    string w = "piece";

    cin>>n>>m;
    diff = m - n;
    w += abs(diff)!=1? "s" : "";


    if(diff > 0)
        cout<<"Dr. Chaz will have "<<diff<<" "<<w<<" of chicken left over!"<<endl;
    else
        cout<<"Dr. Chaz needs "<<abs(diff)<<" more "<<w<<" of chicken!"<<endl;

    return 0;
}