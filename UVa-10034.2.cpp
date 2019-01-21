#include <stdio.h>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

typedef pair<int, int> ii;
typedef pair<double, ii> dii;

int n, parent[100+10];
double ans, freckles[100+10][2];
vector<dii> edges;

double dist(double a, double b, double x, double y)
{
    return sqrt(pow(a-x, 2) + pow(b-y, 2));
}

void init()
{
    for(int i = 0; i <= n; i++)
        parent[i] = i;
}

int find(int x)
{
    return (x == parent[x]? x : parent[x] = find(parent[x]));
}

void kruskal()
{
    int fx, fy;

    for(auto e: edges)
    {
        fx = find(e.second.first);
        fy = find(e.second.second);

        if(fx != fy)
        {
            parent[fy] = fx;
            ans+=e.first;
        }
    }

}


int main()
{
    int t;

    scanf("%d", &t); 

    while(t--)
    {
        scanf("\n%d", &n);
        edges.clear();
        init();
        ans = 0;

        for(int i = 0; i < n; i++)
            scanf("%lf %lf", &freckles[i][0], &freckles[i][1]);

        for(int i = 0; i < n; i++)
            for(int j = i+1; j < n; j++)
            {
                dii e;
                e.second.first = i;
                e.second.second = j;
                e.first = dist(freckles[i][0], freckles[i][1], freckles[j][0], freckles[j][1]);
                edges.push_back(e);
            }
        
        sort(edges.begin(), edges.end());
        kruskal();

        printf("%.2lf\n", ans);

        if(t > 0)
            printf("\n");
    }

    return 0;
}