#include <iostream>
#include <vector>
using namespace std;

int n, parent[10000 + 10];

void init_parent()
{
    for (int i = 0; i <= n; i++)
        parent[i] = i;
}

int find(int x)
{
    return (x == parent[x] ? x : parent[x] = find(parent[x]));
}

void _union(int x, int y)
{
    int fx = find(x);
    int fy = find(y);

    if (fx != fy)
        n--;

    parent[fy] = fx;
}

int main()
{
    int t, m, a, b;

    cin >> t;

    while (t--)
    {
        cin >> n >> m;
        init_parent();

        for (int i = 0; i < m; i++)
        {
            cin >> a >> b;
            _union(a, b);
        }

        cout << ((n * (n - 1)) >> 1) << endl;
    }

    return 0;
}