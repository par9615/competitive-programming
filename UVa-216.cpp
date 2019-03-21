#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

typedef pair<int, int> ii;

int n, pos[8], visited[8], res[8];
double mini;
ii points[8];

double distance(ii a, ii b)
{
    return sqrt(pow(a.first - b.first, 2) + pow(a.second - b.second, 2));
}

double totalDistance()
{
    double res = 0;
    
    for(int i = 0; i < n-1; i++)
        res += distance(points[pos[i]], points[pos[i+1]])+16;
    
    return res;
}

void backtrack(int level)
{
    if(level == n)
    {
        if(totalDistance() < mini)
        {
            mini = totalDistance();
            for(int i = 0; i < n; i++)
                res[i] = pos[i];
        }
    }
    
    for(int i = 0; i < n; i++)
    {
        if(!visited[i])
        {
            visited[i] = 1;
            pos[level] = i;
            backtrack(level+1);
            visited[i] = 0;
        }
    }
    
}

int main() {
    int t = 0;
    
    while(cin>>n, n)
    {
        mini = 999999999;
        int a, b;
        for(int i = 0; i < n; i++)
        {
            cin>>a>>b;
            points[i] = ii(a,b);
        }
        
        backtrack(0);
        
        cout<<"**********************************************************"<<endl;
        cout<<"Network #"<<++t<<endl;
        
        for(int i = 0; i < n-1; i++)
        {
            ii u, v;
            u = points[res[i]];
            v = points[res[i+1]];
            cout<<fixed<<setprecision(2)<<"Cable requirement to connect ("<<u.first<<","<<u.second<<") to ("<<v.first<<","<<v.second<<") is "<<(distance(u, v)+16)<<" feet."<<endl;
        }
        cout<<"Number of feet of cable required is "<<mini<<"."<<endl;
    }

	return 0;
}
