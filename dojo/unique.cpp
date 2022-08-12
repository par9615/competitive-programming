#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v = {3, 4, 6, 1, 2, 10, 11, 9, 13, 1, 2, 3, 4, 5};
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());

    for(int e: v)
    {
        cout<<e<<" ";
    }

    return 0;
}
