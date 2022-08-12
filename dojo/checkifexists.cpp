#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int pos;
    int L[] = {5, 10, 33, 2, 2, 3, 1, 2, 3, 7, 8};

    sort(L, L+11);

    pos = binary_search(L, L+11, 100);

    cout<<pos<<endl;
    return 0;
}