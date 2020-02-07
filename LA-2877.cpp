#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <cfloat>
#include <set>
using namespace std;

typedef pair<int, int> ii;
typedef pair<double, double> dd;
typedef vector<dd> vdd;
typedef set<dd> sdd;
typedef tuple<double, double, double> ddd; //(x, m, b)

int n, maxi;
vector<dd> points;
map<ddd, sdd> connected;

ddd generate_equation(dd pa, dd pb)
{
    double y, x, m, b;
    if((pa.first != pb.first))
    {
        m = (pb.second - pa.second)/(pb.first - pa.first);
        b = (-m * pa.first) + pa.second;
        x = 0;
    }
    else
    {
        m = DBL_MAX;
        b = 0;
        x = pa.first;

    }
    return ddd(x, m, b);
}

int main()
{
    while(cin>>n, n > 0)
    {
        points.clear();
        connected.clear();
        maxi = 0;

        int x, y;

        for(int i = 0; i < n; i++)
        {
            cin>>x>>y;
            points.push_back(dd(x,y));
        }

        sort(points.begin(), points.end());
        for(int i = 0; i < n; i++)
            for(int j = i+1; j < n; j++)
            {
                ddd eq = generate_equation(points[i], points[j]);
                connected[eq].insert(points[i]);
                connected[eq].insert(points[j]);
            }

        for(auto e: connected)
           maxi = max(maxi, (int)e.second.size());


        cout<<maxi<<endl;

    }

    return 0;
}
