#include <iostream>
#include <algorithm>

using namespace std;

int a[200000+5];

void case_2(int *a)
{
    if(a[0] > a[1])
        cout<<"Bigger"<<endl;
    else if(a[0] == a[1])
        cout<<"Equal"<<endl;
    else
        cout<<"Smaller"<<endl;
}

void case_3(int *a)
{
    int temp[3] = {a[0], a[1], a[2]};
    sort(temp, temp+3);
    cout<<temp[1]<<endl;
}

void case_4(int *a, int n)
{
    long long sum = 0;

    for(int i = 0; i < n; i++)
        sum += a[i];

    cout<<sum<<endl;
}

void case_5(int *a, int n)
{
    long long sum = 0;

    for(int i = 0; i < n; i++)
        if(!(a[i]&1))
            sum += a[i];

    cout<<sum<<endl;
}

void case_6(int *a, int n)
{
    for(int i = 0; i < n; i++)
        cout<<char(97+a[i] % 26);
    cout<<endl;
}

void case_7(int *a, int n)
{
    int i = 0;
    bool visited[200000+5] = {false};

    while(true)
    {
        if(i >= n)
        {
            cout<<"Out"<<endl;
            return;
        }

        if(visited[i])
        {
            cout<<"Cyclic"<<endl;
            return;
        }

        if(i == n-1)
        {
            cout<<"Done"<<endl;
            return;
        }

        visited[i] = true;
        i = a[i];
    }

}

int main()
{
    int n, t;

    cin>>n>>t;

    for(int i = 0; i < n; i++)
        cin>>a[i];


    switch(t)
    {
        case 1:
            cout<<7<<endl;
            break;
        case 2:
            case_2(a);
            break;
        case 3:
            case_3(a);
            break;
        case 4:
            case_4(a, n);
            break;
        case 5:
            case_5(a, n);
            break;
        case 6:
            case_6(a, n);
            break;
        case 7:
            case_7(a, n);
            break;
    }

    return 0;
}