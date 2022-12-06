#include <stdio.h>
#include <map>
#include <array>

using namespace std;

map<char, array<int, 2>> values = {
    {'A', {11, 11}},
    {'K', {4, 4}},
    {'Q', {3, 3}},
    {'J', {20, 2}},
    {'T', {10, 10}},
    {'9', {14, 0}},
    {'8', {0, 0}},
    {'7', {0, 0}},
    };

int main()
{

    int n, res = 0;
    char b;

    scanf("%d %c", &n, &b);

    char d, s;
    bool v;
    for(int i = 0; i < 4*n; i++)
    {
        scanf(" %c%c", &d, &s);
        v = (s == b);

        res += values[d][!v];
    }


    printf("%d\n", res);
    return 0;

}