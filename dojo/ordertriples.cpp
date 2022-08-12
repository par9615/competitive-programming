#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

#define iii tuple<int, int, int>
#define viii vector<iii>

int main()
{
    viii d;

    d.emplace_back(5, 11, -1998);
    d.emplace_back(6, 10, -2000);
    d.emplace_back(5, 12, -1998);
    d.emplace_back(5, 12, -2020);
    d.emplace_back(6, 10, -1972);

    sort(d.begin(), d.end());

    for(auto [mm, dd, yyyy]: d)
    {
        cout<<mm<<","<<dd<<","<<yyyy<<endl;
    }
    return 0;
}